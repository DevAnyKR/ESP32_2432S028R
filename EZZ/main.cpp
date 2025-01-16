#include "includes.h"

SPIClass            touchscreenSpi = SPIClass(VSPI);
XPT2046_Touchscreen touchscreen(XPT2046_CS, XPT2046_IRQ);
uint16_t            touchScreenMinimumX = 200, touchScreenMaximumX = 3860, touchScreenMinimumY = 240, touchScreenMaximumY = 3860;

/*Set to your screen resolution*/
#define TFT_HOR_RES   TFT_WIDTH
#define TFT_VER_RES   TFT_HEIGHT

/*LVGL draw into this buffer, 1/10 screen size usually works well. The size is in bytes*/
#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10 * (LV_COLOR_DEPTH / 8))

/* LVGL calls it when a rendered image needs to copied to the display*/
void my_disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map) {
  /*Call it to tell LVGL you are ready*/
  lv_disp_flush_ready(disp);
}
/*Read the touchpad*/
void my_touchpad_read(lv_indev_t *indev, lv_indev_data_t *data) {
  if (touchscreen.touched()) {
    TS_Point p = touchscreen.getPoint();
    // Some very basic auto calibration so it doesn't go out of range
    if (p.x < touchScreenMinimumX) touchScreenMinimumX = p.x;
    if (p.x > touchScreenMaximumX) touchScreenMaximumX = p.x;
    if (p.y < touchScreenMinimumY) touchScreenMinimumY = p.y;
    if (p.y > touchScreenMaximumY) touchScreenMaximumY = p.y;
    // Map this to the pixel position
    data->point.x = map(p.x, touchScreenMinimumX, touchScreenMaximumX, 1, TFT_HOR_RES); /* Touchscreen X calibration */
    data->point.y = map(p.y, touchScreenMinimumY, touchScreenMaximumY, 1, TFT_VER_RES); /* Touchscreen Y calibration */
    data->state   = LV_INDEV_STATE_PRESSED;

  } else {
    data->state = LV_INDEV_STATE_RELEASED;
  }
}

lv_indev_t *indev;        // Touchscreen input device
uint8_t    *draw_buf;     // draw_buf is allocated on heap otherwise the static area is too big on ESP32 at compile
uint32_t    lastTick = 0; // Used to track the tick timer

void        setup() {
  Serial.begin(115200);

  // Initialise the touchscreen
  touchscreenSpi.begin(XPT2046_CLK, XPT2046_MISO, XPT2046_MOSI, XPT2046_CS); /* Start second SPI bus for touchscreen */
  touchscreen.begin(touchscreenSpi);                                         /* Touchscreen init */
  touchscreen.setRotation(2);                                                // AliExpress                                                /* Inverted landscape orientation to match screen */

  lv_init();

  draw_buf = new uint8_t[DRAW_BUF_SIZE];
  lv_display_t *disp;
  disp = lv_tft_espi_create(TFT_HOR_RES, TFT_VER_RES, draw_buf, DRAW_BUF_SIZE);
  lv_display_set_rotation(disp, LV_DISPLAY_ROTATION_90);

  // Initialize the XPT2046 input device driver
  indev = lv_indev_create();
  lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
  lv_indev_set_read_cb(indev, my_touchpad_read);

  ui_init();

  // RTC Update
  setTime(cvt_date(__DATE__, __TIME__));

  // LED
  pinMode(4, OUTPUT);
}

void loop() {
  // LVGL
  lv_label_set_text_fmt(objects.ui_local_time_value, "%04i/%02d/%02d,%02d:%02d:%02d;", year(), month(), day(), hour(), minute(), second());
  lv_arc_set_value(objects.arc_hour, hour() % 12);
  lv_arc_set_value(objects.arc_min, minute());
  lv_arc_set_value(objects.arc_sec, second());

  if (&timerTick_500ms.flag) {
    digitalWrite(4, LOW);
  } else {
    digitalWrite(4, HIGH);
  }

  lv_tick_inc(millis() - lastTick); // Update the tick timer. Tick is new for LVGL 9
  lastTick = millis();

  ui_tick();
  // Update the UI
  delay(lv_timer_handler());
}
