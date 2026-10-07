// Complete example solution for Lesson08, challenge 05.
const int LIGHT_PIN = A0, BUZZER_PIN = 12;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int r = analogRead(LIGHT_PIN);
  if (r<200) noTone(BUZZER_PIN);
  else tone(BUZZER_PIN, constrain(map(r, 200, 1023, 200, 800), 200, 800));
  Serial.println(r);
  delay(100);
}
