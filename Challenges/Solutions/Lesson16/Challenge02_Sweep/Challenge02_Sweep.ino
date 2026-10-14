// Complete example solution for Lesson16, challenge 02.
#include <Servo.h>
Servo arm;
const int SERVO_PIN = 9;
void setup() {
  arm.attach(SERVO_PIN);
}
void loop() {
  for (int a = 30;a <= 150;a++) {
    arm.write(a);
    delay(20);
  }
  for (int a = 150;a >= 30;a--) {
    arm.write(a);
    delay(20);
  }
}
