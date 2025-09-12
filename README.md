# Smart Irrigation System 🌱💧 (with 3 Soil Sensors)

## 📌 Overview
This project is a **Smart Irrigation System** using Arduino Uno, 3 Soil Moisture Sensors, a Relay, and a Water Pump.  
The system automatically waters plants if **any one sensor detects dryness**.  

---

## 🛠 Components Used
- Arduino Uno
- 3x Soil Moisture Sensors
- 16x2 LCD Display + Potentiometer
- 5V Relay Module
- Water Pump
- 9V Battery / Power Supply
- Jumper Wires, Breadboard

---

## ⚡ Circuit Connections
### LCD Display (16x2)
| LCD Pin | Arduino Pin |
|---------|-------------|
| RS      | 7           |
| E       | 6           |
| D4      | 5           |
| D5      | 4           |
| D6      | 3           |
| D7      | 2           |
| VSS,GND | GND         |
| VDD     | +5V         |
| VO      | Potentiometer |

### Soil Moisture Sensors
- Sensor 1 → A0  
- Sensor 2 → A1  
- Sensor 3 → A2  
- All VCC → +5V  
- All GND → GND  

### Relay Module
- Relay IN → D8  
- Relay VCC → +5V  
- Relay GND → GND  
- Relay Output → Water Pump (powered by external 9V battery)  

---

## ⚙️ Working
1. Reads values from **3 soil moisture sensors**.  
2. If **any one sensor reports dry soil** (`value > threshold`), pump turns **ON**.  
3. If all soil is wet, pump turns **OFF**.  
4. LCD shows all 3 sensor values + pump status.  

---

## 🚀 How to Run
1. Connect components as per circuit diagram.  
2. Open **Arduino IDE**, select **Arduino Uno**, upload code.  
3. Adjust `threshold` in code based on calibration.  
4. Place 3 sensors in soil at different spots.  
5. Power the system → pump works automatically.  

---

## 🔧 Customization
- Adjust threshold:
  ```cpp
  int threshold = 500;
