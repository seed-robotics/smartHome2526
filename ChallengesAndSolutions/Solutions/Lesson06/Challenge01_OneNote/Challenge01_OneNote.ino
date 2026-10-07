// Complete example solution for Lesson06, challenge 01.
const int BUZZER_PIN = 12;
void setup() {
}
void loop() {
  tone(BUZZER_PIN, 440);
  delay(500);
  noTone(BUZZER_PIN);
  delay(500);
}
