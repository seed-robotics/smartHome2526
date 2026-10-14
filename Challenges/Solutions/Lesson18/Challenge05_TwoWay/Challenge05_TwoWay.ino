// Complete example solution for Lesson18, challenge 05.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
const int LED_PIN = 12, LIGHT_PIN = A1;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  bluetooth.begin(9600);
}
void loop() {
  static unsigned long sentAt = 0;
  if (millis()-sentAt >= 1000) {
    sentAt = millis();
    bluetooth.print("Light: ");
    bluetooth.println(analogRead(LIGHT_PIN));
  }
  if (bluetooth.available()) {
    char c = bluetooth.read();
    if (c == '1') digitalWrite(LED_PIN, HIGH);
    else if (c == '0') digitalWrite(LED_PIN, LOW);
  }
}
