// Complete example solution for Lesson17, challenge 02.
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int count = 0;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 0);
  lcd.print("Count: ");
  lcd.print(count++);
  lcd.print("   ");
  delay(1000);
}
