// Complete example solution for Lesson16, challenge 03.
#include <Servo.h>
Servo arm;
const int SERVO_PIN = 9;
void setup() {
  arm.attach(SERVO_PIN);
}
void loop() {
  for (int pause = 10;pause <= 40;pause+ = 30) {
    for (int a = 30;a <= 150;a++) {
      arm.write(a);
      delay(pause);
    }
    for (int a = 150;a >= 30;a--) {
      arm.write(a);
      delay(pause);
    }
    delay(500);
  }
}
