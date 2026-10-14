// Complete example solution for Lesson06, challenge 04.
const int BUZZER_PIN = 12;
void setup() {
}
void loop() {
  tone(BUZZER_PIN, 440);
  delay(200);
  noTone(BUZZER_PIN);
  delay(150);
  tone(BUZZER_PIN, 660);
  delay(200);
  noTone(BUZZER_PIN);
  delay(150);
  tone(BUZZER_PIN, 880);
  delay(700);
  noTone(BUZZER_PIN);
  delay(1000);
}
