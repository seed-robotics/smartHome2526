// Complete example solution for Lesson17, challenge 03.
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int LIGHT_PIN = A1;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  int value = analogRead(LIGHT_PIN);
  lcd.setCursor(0, 0);
  lcd.print("Light reading:  ");
  lcd.setCursor(0, 1);
  lcd.print(value);
  lcd.print("     ");
  delay(250);
}
