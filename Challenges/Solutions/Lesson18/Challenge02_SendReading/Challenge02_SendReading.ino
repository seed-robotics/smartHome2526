// Complete example solution for Lesson18, challenge 02.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
const int LIGHT_PIN = A1;
void setup() {
  bluetooth.begin(9600);
}
void loop() {
  bluetooth.println(analogRead(LIGHT_PIN));
  delay(1000);
}
