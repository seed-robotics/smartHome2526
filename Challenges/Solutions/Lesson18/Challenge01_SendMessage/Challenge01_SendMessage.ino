// Complete example solution for Lesson18, challenge 01.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
void setup() {
  bluetooth.begin(9600);
}
void loop() {
  bluetooth.println("Arduino ready");
  delay(1000);
}
