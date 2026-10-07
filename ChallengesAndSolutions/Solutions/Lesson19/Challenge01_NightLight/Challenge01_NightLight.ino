// Complete example solution for Lesson19, challenge 01.
const int LIGHT_PIN = A1, LED_PIN = 9;
const int DARK_LIMIT = 450;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, analogRead(LIGHT_PIN)<DARK_LIMIT?HIGH:LOW);
  delay(50);
}
