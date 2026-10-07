// Complete example solution for Lesson01, challenge 05.
const int LED_PIN = LED_BUILTIN;
const int blinkDelay = 500;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(blinkDelay);
  digitalWrite(LED_PIN, LOW);
  delay(blinkDelay);
}
