#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *page_menu;
    lv_obj_t *page_gnss;
    lv_obj_t *page_settings;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *icon_gnss;
    lv_obj_t *gps_1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *spin_hour;
    lv_obj_t *spin_min;
    lv_obj_t *spin_sec;
    lv_obj_t *time;
    lv_obj_t *ui_local_time_value;
    lv_obj_t *arc_hour;
    lv_obj_t *arc_min;
    lv_obj_t *arc_sec;
    lv_obj_t *bat_level;
    lv_obj_t *status_usb_connected;
    lv_obj_t *keyboard;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_PAGE_MENU = 2,
    SCREEN_ID_PAGE_GNSS = 3,
    SCREEN_ID_PAGE_SETTINGS = 4,
};

void create_screen_main();
void tick_screen_main();

void create_screen_page_menu();
void tick_screen_page_menu();

void create_screen_page_gnss();
void tick_screen_page_gnss();

void create_screen_page_settings();
void tick_screen_page_settings();

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/