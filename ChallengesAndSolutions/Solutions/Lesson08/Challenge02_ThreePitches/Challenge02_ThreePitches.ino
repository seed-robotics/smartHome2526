// Complete example solution for Lesson08, challenge 02.
const int LIGHT_PIN = A0, BUZZER_PIN = 12;
void setup() {
}
void loop() {
  int r = analogRead(LIGHT_PIN);
  int pitch = r<350?300:r<700?500:700;
  tone(BUZZER_PIN, pitch);
  delay(100);
}
