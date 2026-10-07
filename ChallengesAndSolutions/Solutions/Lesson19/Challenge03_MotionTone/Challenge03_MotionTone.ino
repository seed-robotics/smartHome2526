// Complete example solution for Lesson19, challenge 03.
const int PIR_PIN = 2, BUZZER_PIN = 12;
int previous = LOW;
void setup() {
  pinMode(PIR_PIN, INPUT);
}
void loop() {
  int motion = digitalRead(PIR_PIN);
  if (motion == HIGH && previous == LOW) tone(BUZZER_PIN, 880, 150);
  previous = motion;
}
