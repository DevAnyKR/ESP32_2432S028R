#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ICON32_HOME
#define LV_ATTRIBUTE_IMG_ICON32_HOME
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ICON32_HOME
uint8_t img_icon32_home_map[] = {

    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x45,0xa9,0xc3,0xb0,0xc3,0xb0,0x24,0xb1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0xa2,0xb8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe3,0xa8,0xe3,0xb0,0xe3,0xb0,0x65,0xb9,0x65,0xb9,0xe3,0xb0,0xe3,0xb0,0xe3,0xa8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xb9,0xe3,0xb0,0xe3,0xb0,0xa6,0xb9,0x5a,0xe6,0x7b,0xe6,0xa7,0xb9,0xe3,0xb0,0xe3,0xb0,0xe3,0xb8,0x00,0x00,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0xe7,0xb9,0x9b,0xe6,0x5e,0xef,0x5e,0xef,0xbc,0xe6,0x08,0xc2,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0x28,0xc2,0xdc,0xe6,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xdc,0xe6,0x49,0xc2,0xe3,0xb0,0xe3,0xb0,0x33,0xbc,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe3,0xb8,0xe3,0xb0,0xe3,0xb0,0x6a,0xc2,0xfd,0xe6,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x1d,0xe7,0x8a,0xc2,0xe3,0xb0,0x04,0xb1,0x17,0xc5,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0xcb,0xc2,0x1d,0xe7,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x3e,0xe7,0xec,0xc2,0xe3,0xb0,0x24,0xb1,0xd6,0xc4,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0x2d,0xcb,0x3e,0xe7,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x37,0x4c,0x37,0x4c,0x37,0x4c,0x37,0x4c,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x3e,0xe7,0x6e,0xcb,0xe3,0xb0,0x04,0xb1,0x94,0xc4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0x8f,0xcb,0x5e,0xe7,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xb3,0x02,0xb3,0x02,0xb3,0x02,0xb3,0x02,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xcf,0xcb,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe3,0xb0,0xe3,0xb0,0xe3,0xb0,0xf0,0xcb,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xb3,0x02,0xb3,0x02,0xb3,0x02,0xb3,0x02,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x52,0xd4,0xe3,0xb0,0xe3,0xb0,0xe3,0xb8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xc3,0xb0,0xe3,0xb0,0xe3,0xb0,0x72,0xd4,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xb3,0x02,0xb3,0x02,0xb3,0x02,0xb3,0x02,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xb3,0xd4,0xe3,0xb8,0xe3,0xb0,0xe3,0xb0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xc3,0xb0,0xc3,0xb0,0xe4,0xb0,0x15,0xd5,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0xdb,0x9d,0xdb,0x9d,0xdb,0x9d,0xdb,0x9d,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x15,0xd5,0xe4,0xb0,0xc3,0xb0,0xc3,0xb0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xe3,0xb0,0x76,0xdd,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x76,0xdd,0xe3,0xb0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x95,0xe5,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x64,0xda,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x89,0xf3,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0xe6,0xe2,0x02,0xda,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x5e,0xef,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x02,0xda,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0xcd,0xd3,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x5d,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0xa8,0xaf,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a,0xb6,0xff,0xff,0xbc,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xc4,0xff,0xff,0xff,0xff,0xc4,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0xd0,0xff,0xff,0xff,0xff,0xff,0xff,0xd5,0x1a,0x00,0x55,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,0x23,0x55,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0xe3,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe7,0x73,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0xeb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf4,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0xf2,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4d,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x5c,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6b,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0x73,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x77,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x88,0x00,0x00,0x00,0x00,0x00,0x1c,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0x1c,0x00,0x00,
    0x00,0x00,0x00,0x3e,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x8e,0x8e,0x8e,0x8e,0x8e,0x8e,0x8e,0x8e,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

};

const lv_image_dsc_t img_icon32_home = {
  .header.magic = LV_IMAGE_HEADER_MAGIC,
  .header.cf = LV_COLOR_FORMAT_RGB565A8,
  .header.flags = 0,
  .header.w = 32,
  .header.h = 32,
  .header.stride = 64,
  .data_size = sizeof(img_icon32_home_map),
  .data = img_icon32_home_map,
};

