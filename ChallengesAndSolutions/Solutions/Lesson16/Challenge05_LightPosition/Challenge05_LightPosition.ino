// Complete example solution for Lesson16, challenge 05.
#include <Servo.h>
Servo arm;
const int SERVO_PIN = 9, LIGHT_PIN = A1;
void setup() {
  arm.attach(SERVO_PIN);
}
void loop() {
  int light = analogRead(LIGHT_PIN);
  int angle = light<350?30:light<700?90:150;
  arm.write(angle);
  delay(200);
}
