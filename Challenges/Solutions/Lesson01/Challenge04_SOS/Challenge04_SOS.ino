// Complete example solution for Lesson01, challenge 04.
const int LED_PIN = LED_BUILTIN;
void flash(int duration) {
  digitalWrite(LED_PIN, HIGH);
  delay(duration);
  digitalWrite(LED_PIN, LOW);
  delay(250);
}
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  for (int i = 0; i < 3; i++) flash(200);
  for (int i = 0; i < 3; i++) flash(600);
  for (int i = 0; i < 3; i++) flash(200);
  delay(1500);
}
