# ESP32-2432S028R

ESP32 + TFT-LCD + Touch Panel + SD Slot 등이 모두 내장된 개발 보드입니다.

Arduino IDE는 컴파일 속도가 매우 느리고, 라이브러리 설정이 복잡하며 다른 프로젝트와 호환되지 않습니다.
그외 여러가지 이유로 Arduino IDE는 개발하기 불편한 환경입니다.

PlatformIO IDE에서 사용할 수 있도록 재구성하였습니다.

### 보드 구입하기

[AliExpress Store](https://s.click.aliexpress.com/e/_oEkDPab)

![image](https://github.com/user-attachments/assets/0a4fbbd2-c4fa-48ef-bc53-e8ed9a881e4e)

just USD$8.xx

## 사용 방법

platformio.ini 파일을 열고
```src_dir =``` 항목에 각 예제 폴더명을 지정합니다.

예) ```src_dir = LGFX_TFT_graphicstest_PDQ```

## Main Libraries
- TFT_eSPI
- [LVGL](https://github.com/lvgl/lvgl)
- [LovyanGFX](https://github.com/lovyan03/LovyanGFX)
- XPT2046_Touchscreen

## References
- https://github.com/witnessmenow/ESP32-Cheap-Yellow-Display

## License
MIT
