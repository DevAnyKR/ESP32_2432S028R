# ESP32-2432S028R

ESP32 + TFT-LCD + Touch Panel + SD Slot 등이 모두 내장된 개발 보드입니다.

Arduino IDE는 컴파일 속도가 매우 느리고, 라이브러리 설정이 복잡하며 다른 프로젝트와 호환되지 않습니다.
그외 여러가지 이유로 Arduino IDE는 개발하기 불편한 환경입니다.

PlatformIO IDE에서 사용할 수 있도록 재구성하였습니다.

### 보드 구입하기

- [AliExpress Store 1](https://s.click.aliexpress.com/e/_oEkDPab)
- [AliExpress Store 2](https://s.click.aliexpress.com/e/_oB5bPtp)
- [AliExpress Store 3](https://s.click.aliexpress.com/e/_oEWKFFl)


![image](https://github.com/user-attachments/assets/0a4fbbd2-c4fa-48ef-bc53-e8ed9a881e4e)

just USD$8.xx

- USB: micro 5Pin
- Display: 240x320 ILI9341
- Touch: XPT2046

# LVGL, LovyanGFX 라이브러리 사용 방법
## 새 프로젝트일 때
platformio.ini 파일을 열고
`src_dir =` 줄을 모두 주석으로 변경하거나 삭제합니다.

`.\src\` 위치에서 프로젝트 코드 작성을 시작하세요.

※ 프로젝트별로 LVGL 설정을 추가하려면 `.\src\main.cpp` 파일 상단에 다음 코드를 삽입합니다.
```cpp
#include "lv_conf.h"
```

## LovyanGFX 예제 사용 방법
1. `.pio\libdeps\{PIO.`환경이름`}\LovyanGFX\examples`에서 필요한 예제 폴더를 프로젝트 루트에 복사합니다. 복사한 폴더에 `.ino` 파일이 있으면 됩니다.
2. `platformio.ini` 파일을 열고 `[platformio]` 섹션의 `src_dir =` 항목에 예제 폴더명을 지정합니다.

예)
```py
[platformio]
src_dir = LVGL_DEMO
```

## Main Libraries
- TFT_eSPI
- [LVGL](https://github.com/lvgl/lvgl)
- [LovyanGFX](https://github.com/lovyan03/LovyanGFX)
- XPT2046_Touchscreen

## References
- https://github.com/witnessmenow/ESP32-Cheap-Yellow-Display

## License
MIT
