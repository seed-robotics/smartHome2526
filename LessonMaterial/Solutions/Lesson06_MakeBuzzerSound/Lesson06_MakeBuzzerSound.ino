// Complete lesson example. See the kit guide for pin and wiring details.
const int BUZZER_PIN = 12;
void setup() {
}
void loop() {
  tone(BUZZER_PIN, 440);
  delay(500);
  noTone(BUZZER_PIN);
  delay(500);
}
