// Complete example solution for Lesson19, challenge 05.
const int LIGHT_PIN = A1, PIR_PIN = 2, LED_PIN = 9, BUZZER_PIN = 12;
const int DARK_LIMIT = 450;
int previousMotion = LOW;
void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int motion = digitalRead(PIR_PIN);
  bool dark = analogRead(LIGHT_PIN)<DARK_LIMIT;
  digitalWrite(LED_PIN, (dark || motion == HIGH)?HIGH:LOW);
  if (motion == HIGH && previousMotion == LOW) tone(BUZZER_PIN, 880, 150);
  previousMotion = motion;
}
