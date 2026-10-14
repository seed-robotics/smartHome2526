// Complete lesson example. See the kit guide for pin and wiring details.
const int GAS_PIN = A3;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(GAS_PIN));
  delay(500);
}
