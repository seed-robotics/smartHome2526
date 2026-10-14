// Complete lesson example. See the kit guide for pin and wiring details.
const int LED_PIN = LED_BUILTIN;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
