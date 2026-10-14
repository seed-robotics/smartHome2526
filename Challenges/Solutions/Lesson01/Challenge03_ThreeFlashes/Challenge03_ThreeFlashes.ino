// Complete example solution for Lesson01, challenge 03.
const int LED_PIN = LED_BUILTIN;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  for (int flash = 0; flash < 3; flash++) {
    digitalWrite(LED_PIN, HIGH);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    delay(300);
  }
  delay(2000);
}
