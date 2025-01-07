/* Arduino에서 LVGL을 사용하려면 몇 가지 추가 단계가 필요합니다...
 *
 * 여기에서 문서를 읽어보세요: https://docs.lvgl.io/master/integration/framework/arduino.html
 * 하지만 미리 편집되어 작동하므로 repo의 lv_conf.h를 사용해야 합니다.
 *
 * 나중에 언제든지 자신의 lv_conf.h를 편집하고 빌드 환경이 작동하면 예제 옵션을 제외할 수 있습니다.
 *
 * 반드시 'examples' 및 'demos' 폴더를 lvgl 라이브러리 폴더 내부의 'src' 폴더로 옮겨야 합니다.
 * 그렇지 않으면 컴파일되지 않습니다. repo의 README.md를 참조하세요.
 *
 */
#include <lvgl.h>

#include <TFT_eSPI.h>

#include <demos/lv_demos.h>
#include <examples/lv_examples.h>

#include <XPT2046_Touchscreen.h>
// A library for interfacing with the touch screen

//
// Can be installed from the library manager (Search for "XPT2046")
// https://github.com/PaulStoffregen/XPT2046_Touchscreen
// ----------------------------
// Touch Screen pins
// ----------------------------

// The CYD touch uses some non default
// SPI pins

#define XPT2046_IRQ 36
#define XPT2046_MOSI 32
#define XPT2046_MISO 39
#define XPT2046_CLK 25
#define XPT2046_CS 33
SPIClass touchscreenSpi = SPIClass(VSPI);
XPT2046_Touchscreen touchscreen(XPT2046_CS, XPT2046_IRQ);
uint16_t touchScreenMinimumX = 200, touchScreenMaximumX = 3860, touchScreenMinimumY = 240, touchScreenMaximumY = 3860;

/*Set to your screen resolution*/
#define TFT_HOR_RES 240 // AliExpress
#define TFT_VER_RES 320

/*LVGL draw into this buffer, 1/10 screen size usually works well. The size is in bytes*/
#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10 * (LV_COLOR_DEPTH / 8))

#if LV_USE_LOG != 0
void my_print(lv_log_level_t level, const char *buf) {
  LV_UNUSED(level);
  Serial.println(buf);
  Serial.flush();
}
#endif

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
    if (p.x < touchScreenMinimumX)
      touchScreenMinimumX = p.x;
    if (p.x > touchScreenMaximumX)
      touchScreenMaximumX = p.x;
    if (p.y < touchScreenMinimumY)
      touchScreenMinimumY = p.y;
    if (p.y > touchScreenMaximumY)
      touchScreenMaximumY = p.y;
    // Map this to the pixel position
    data->point.x = map(p.x, touchScreenMinimumX, touchScreenMaximumX, 1, TFT_HOR_RES); /* Touchscreen X calibration */
    data->point.y = map(p.y, touchScreenMinimumY, touchScreenMaximumY, 1, TFT_VER_RES); /* Touchscreen Y calibration */
    data->state   = LV_INDEV_STATE_PRESSED;
    /*
    Serial.print("Touch x ");
    Serial.print(data->point.x);
    Serial.print(" y ");
    Serial.println(data->point.y);
    */
  } else {
    data->state = LV_INDEV_STATE_RELEASED;
  }
}

lv_indev_t *indev;     // Touchscreen input device
uint8_t *draw_buf;     // draw_buf is allocated on heap otherwise the static area is too big on ESP32 at compile
uint32_t lastTick = 0; // Used to track the tick timer

void setup() {
  // Some basic info on the Serial console
  String LVGL_Arduino = "LVGL demo ";
  LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();
  Serial.begin(115200);
  Serial.println(LVGL_Arduino);

  // Initialise the touchscreen
  touchscreenSpi.begin(XPT2046_CLK, XPT2046_MISO, XPT2046_MOSI, XPT2046_CS); /* Start second SPI bus for touchscreen */
  touchscreen.begin(touchscreenSpi);                                         /* Touchscreen init */
  touchscreen.setRotation(2);                                                // AliExpress                                                /* Inverted landscape orientation to match screen */

  // Initialise LVGL
  lv_init();
  draw_buf = new uint8_t[DRAW_BUF_SIZE];
  lv_display_t *disp;
  disp = lv_tft_espi_create(TFT_HOR_RES, TFT_VER_RES, draw_buf, DRAW_BUF_SIZE);
  lv_display_set_rotation(disp, LV_DISPLAY_ROTATION_90); // 회전. 202501

  // Initialize the XPT2046 input device driver
  indev = lv_indev_create();
  lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
  lv_indev_set_read_cb(indev, my_touchpad_read);

  /* Try an example. See all the examples
   * online: https://docs.lvgl.io/master/examples.html
   */
  // lv_example_animimg_1();
  // lv_example_arc_1();
  // lv_example_arc_2();
  // lv_example_bar_1();
  // lv_example_bar_2();
  // lv_example_bar_3();
  // lv_example_bar_4();
  // lv_example_bar_5();
  // lv_example_bar_6();
  // lv_example_btn_1();
  // lv_example_btn_2();
  // lv_example_btn_3();
  // lv_example_btnmatrix_1();
  // lv_example_btnmatrix_2();
  // lv_example_btnmatrix_3();
  // lv_example_calendar_1();
  // lv_example_chart_1();
  // lv_example_chart_2();
  // lv_example_chart_3();
  // lv_example_chart_4();
  // lv_example_chart_5();
  // lv_example_chart_6();
  // lv_example_chart_7();
  // lv_example_chart_8();
  // lv_example_chart_9();
  // lv_example_checkbox_1();
  // lv_example_checkbox_2();
  // lv_example_dropdown_1();
  // lv_example_dropdown_2();
  // lv_example_dropdown_3();
  // lv_example_keyboard_1();
  // lv_example_label_1();
  // lv_example_label_2();
  // lv_example_label_3();
  // lv_example_label_4();
  // lv_example_label_5();
  // lv_example_line_1();
  // lv_example_list_1();
  // lv_example_list_2();
  // lv_example_msgbox_1();
  // lv_example_roller_1();
  // lv_example_roller_2();
  // lv_example_roller_3();
  // lv_example_slider_1();
  // lv_example_slider_2();
  // lv_example_slider_3();
  // lv_example_span_1();
  // lv_example_spinbox_1();
  // lv_example_spinner_1();
  // lv_example_switch_1();
  // lv_example_table_1();
  // lv_example_table_2();
  // lv_example_tabview_1();
  // lv_example_tabview_2();
  // lv_example_textarea_1();
  // lv_example_textarea_2();
  // lv_example_textarea_3();
  // lv_example_tileview_1();
  // lv_example_win_1();

  // Or try out the large standard widgets demo
  lv_demo_widgets();
  // lv_demo_benchmark();
  // lv_demo_keypad_encoder();

  // Done
  Serial.println("Setup done");
}

void loop() {
  lv_tick_inc(millis() - lastTick); // Update the tick timer. Tick is new for LVGL 9
  lastTick = millis();
  lv_timer_handler(); // Update the UI
  delay(5);
}
