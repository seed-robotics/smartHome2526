// Complete lesson example. See the kit guide for pin and wiring details.
const int LIGHT_PIN = A0, BUZZER_PIN = 12;
void setup() {
}
void loop() {
  int r = analogRead(LIGHT_PIN);
  tone(BUZZER_PIN, r<500?300:700);
  delay(100);
}
