// Complete lesson example. See the kit guide for pin and wiring details.
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
