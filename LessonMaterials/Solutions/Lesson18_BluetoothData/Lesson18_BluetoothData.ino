// Complete lesson example. See the kit guide for pin and wiring details.
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);
void setup() {
  bluetooth.begin(9600);
}
void loop() {
  bluetooth.println("Arduino ready");
  delay(1000);
}
