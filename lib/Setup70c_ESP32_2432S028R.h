// Setup for the ESP32 C3 with ILI9341 display
// Note SPI DMA with ESP32 C3 is not currently supported

#define USER_SETUP_ID 70
// See SetupX_Template.h for all options available

#define ILI9341_2_DRIVER

#define TFT_CS 15

#define TFT_MOSI 13
#define TFT_MISO 12
#define TFT_SCLK 14
#define TFT_DC 2
#define TFT_RST -1
#define TFT_BL 21

#define TOUCH_CS 15 // Optional for touch screen

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

#define SPI_FREQUENCY 24000000     // Maximum for ILI9341
#define SPI_READ_FREQUENCY 6000000 // 6 MHz is the maximum SPI read speed for the ST7789V
#define SPI_TOUCH_FREQUENCY 2500000
