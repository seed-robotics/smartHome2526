// Complete example solution for Lesson09, challenge 02.
const int LED_PIN = 9;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  for (int b = 0;b <= 255;b+ = 5) {
    analogWrite(LED_PIN, b);
    delay(30);
  }
  delay(1000);
}
