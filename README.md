# 🚨 IR-Object-Buzzer-Alerts

![](https://img.shields.io/badge/ESP32-DevKit-C00E4?style=flat-square&logo=espressif&logoColor=white)
![](https://img.shields.io/badge/Code-25_Lines-00ff00?style=flat-square)
![](https://img.shields.io/badge/License-MIT-97CA00?style=flat-square&logo=opensourceinitiative)



## ⚡ What it does
- Reads digital IR proximity sensor every 100 ms  
- **LOW** = object in front → buzzer **ON** + Serial prints `Object detected!`  
- **HIGH** = clear → buzzer **OFF** + Serial prints `Clear`

## 🔌 30-Second Wiring
| Part        | Pin  | Note |
|-------------|------|------|
| IR OUT      | GPIO 19 | blue wire |
| IR Vcc      | 3V3   | red wire |
| IR GND      | GND   | black wire |
| Buzzer +    | GPIO 23 | via transistor recommended |
| Buzzer –    | GND   | |

## 🚀 Flash & Forget
1. Clone repo
2. Open `objectdetector.ino`
3. Upload → open Serial Monitor (115 200) → wave hand → **beep!**

## 🎛️ Tweak Table
| Desire | Change |
|--------|--------|
| Slower sampling | `delay(100);` → `delay(500);` |
| Different pins | edit `#define IR_PIN` / `BUZZER_PIN` |
| LED instead of buzzer | swap `BUZZER_PIN` for LED pin |
