// Complete example solution for Lesson17, challenge 05.
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
const int LIGHT_PIN = A1;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  int v = analogRead(LIGHT_PIN);
  const char* state = v < 350 ? "Dim" : v < 700 ? "Medium" : "Bright";
  lcd.setCursor(0, 0);
  lcd.print("Light: ");
  lcd.print(v);
  lcd.print("     ");
  lcd.setCursor(0, 1);
  lcd.print("Status: ");
  lcd.print(state);
  lcd.print("       ");
  delay(300);
}
