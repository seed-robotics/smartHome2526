// Complete lesson example. See the kit guide for pin and wiring details.
const int LIGHT_PIN = A1;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(LIGHT_PIN));
  delay(500);
}
