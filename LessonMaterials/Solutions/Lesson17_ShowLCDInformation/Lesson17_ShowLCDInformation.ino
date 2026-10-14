// Display the current photocell reading on a 16-by-2 LCD.
// Adjust these pins to match the wiring in your kit guide.
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int LIGHT_SENSOR_PIN = A1;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Light reading:");
}

void loop() {
  int lightReading = analogRead(LIGHT_SENSOR_PIN);

  lcd.setCursor(0, 1);
  lcd.print("Value: ");
  lcd.print(lightReading);
  lcd.print(" ");

  delay(250);
}
