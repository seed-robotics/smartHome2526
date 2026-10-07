// Complete lesson example. See the kit guide for pin and wiring details.
const int LIGHT_PIN = A1, LED_PIN = 5;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, analogRead(LIGHT_PIN) >= 500 ? HIGH : LOW);
}
