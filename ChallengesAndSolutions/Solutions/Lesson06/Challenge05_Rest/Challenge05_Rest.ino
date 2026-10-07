// Complete example solution for Lesson06, challenge 05.
const int BUZZER_PIN = 12;
void setup() {
}
void loop() {
  tone(BUZZER_PIN, 440);
  delay(400);
  noTone(BUZZER_PIN);
  delay(300);
  tone(BUZZER_PIN, 660);
  delay(400);
  noTone(BUZZER_PIN);
  delay(1000);
  tone(BUZZER_PIN, 880);
  delay(400);
  noTone(BUZZER_PIN);
  delay(1000);
}
