// Complete example solution for Lesson10, challenge 02.
const int PIR_PIN = 2, LED_PIN = 12;
void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, digitalRead(PIR_PIN));
}
