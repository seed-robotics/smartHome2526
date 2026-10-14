// Complete lesson example. See the kit guide for pin and wiring details.
const int FAN_PIN = 8;
void setup() {
  pinMode(FAN_PIN, OUTPUT);
}
void loop() {
  digitalWrite(FAN_PIN, HIGH);
  delay(2000);
  digitalWrite(FAN_PIN, LOW);
  delay(2000);
}
