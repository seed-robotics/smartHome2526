// Complete example solution for Lesson16, challenge 01.
#include <Servo.h>
Servo arm;
const int SERVO_PIN = 9;
void setup() {
  arm.attach(SERVO_PIN);
}
void loop() {
  arm.write(30);
  delay(1000);
  arm.write(90);
  delay(1000);
  arm.write(150);
  delay(1000);
}
