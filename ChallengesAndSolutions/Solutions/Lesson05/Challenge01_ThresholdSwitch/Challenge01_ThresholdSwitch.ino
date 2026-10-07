// Complete example solution for Lesson05, challenge 01.
const int LIGHT_PIN = A1, LED_PIN = 5;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, analogRead(LIGHT_PIN) >= 500 ? HIGH : LOW);
}
