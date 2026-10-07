// Complete example solution for Lesson03, challenge 01.
const int BUTTON_PIN = 13, LED_PIN = 12;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, digitalRead(BUTTON_PIN));
}
