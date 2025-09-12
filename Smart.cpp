#include <LiquidCrystal.h>

// LCD pin connections (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

// Define pins
const int soilSensor1 = A0;   // Sensor 1
const int soilSensor2 = A1;   // Sensor 2
const int soilSensor3 = A2;   // Sensor 3
const int relayPin   = 8;     // Relay control pin

// Variables
int moisture1 = 0;
int moisture2 = 0;
int moisture3 = 0;

int threshold = 500; // Adjust based on soil type

void setup() {
  // LCD setup
  lcd.begin(16, 2);
  lcd.print("Smart Irrigation");

  // Pin modes
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Pump OFF initially

  delay(2000);
  lcd.clear();
}

void loop() {
  // Read soil moisture values
  moisture1 = analogRead(soilSensor1);
  moisture2 = analogRead(soilSensor2);
  moisture3 = analogRead(soilSensor3);

  // Display sensor values
  lcd.setCursor(0, 0);
  lcd.print("S1:");
  lcd.print(moisture1);
  lcd.print(" S2:");
  lcd.print(moisture2);

  lcd.setCursor(0, 1);
  lcd.print("S3:");
  lcd.print(moisture3);

  // Check dryness condition (if any sensor dry)
  if (moisture1 > threshold || moisture2 > threshold || moisture3 > threshold) {
    lcd.setCursor(10, 1);
    lcd.print("P:ON ");
    digitalWrite(relayPin, LOW); // Pump ON
  } else {
    lcd.setCursor(10, 1);
    lcd.print("P:OFF");
    digitalWrite(relayPin, HIGH); // Pump OFF
  }

  delay(1000);
}
