# Smart-Irrigation-System
Here is some basic highlights of our project:-
This project is my first venture into sensor-based automation, focusing on a Smart Irrigation System using a soil moisture sensor. The system efficiently monitors soil moisture levels and automates the irrigation process to optimize water usage.

The soil moisture sensor measures the input capacitance of the soil and converts it into an analog voltage, which is then processed by the Arduino UNO and converted into a digital value. This digital data is displayed on a 16×2 LCD screen, providing real-time soil moisture readings. As evaporation increases, the moisture content in the soil decreases, affecting the sensor readings. Based on these readings, the system calculates the soil's humidity percentage.

To maintain optimal moisture levels, a 5V relay module controls a DC water pump, which turns ON or OFF automatically based on a predefined moisture threshold. For example, if the threshold is set to 72%, the pump activates when moisture drops below this level and turns off once it reaches the desired percentage.

Components Used:
Arduino UNO (1)
16×2 LCD Display (1)
5V Relay Module (1)
Soil Moisture Sensors (3)
DC Water Pump (1)
Jumper Wires & Breadboard
This project aims to enhance water efficiency in agriculture and home gardening by automating the irrigation process.
