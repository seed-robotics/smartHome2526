// Complete example solution for Lesson18, challenge 03.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
const int BUTTON_PIN = 13;
int previous = LOW;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  bluetooth.begin(9600);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state != previous) {
    bluetooth.println(state == HIGH?"Pressed":"Released");
    previous = state;
    delay(30);
  }
}
