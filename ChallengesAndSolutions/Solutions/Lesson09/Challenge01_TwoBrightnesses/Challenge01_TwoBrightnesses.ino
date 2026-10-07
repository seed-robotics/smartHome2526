// Complete example solution for Lesson09, challenge 01.
const int LED_PIN = 9;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  analogWrite(LED_PIN, 80);
  delay(2000);
  analogWrite(LED_PIN, 220);
  delay(2000);
}
