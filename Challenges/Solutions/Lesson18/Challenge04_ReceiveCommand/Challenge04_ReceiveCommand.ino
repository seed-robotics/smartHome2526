// Complete example solution for Lesson18, challenge 04.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
const int LED_PIN = 12;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  bluetooth.begin(9600);
}
void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();
    if (command == '1') digitalWrite(LED_PIN, HIGH);
    else if (command == '0') digitalWrite(LED_PIN, LOW);
  }
}
