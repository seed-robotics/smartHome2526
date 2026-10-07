// Complete example solution for Lesson19, challenge 02.
const int LIGHT_PIN = A1, PIR_PIN = 2, LED_PIN = 9;
const int DARK_LIMIT = 450;
void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  bool dark = analogRead(LIGHT_PIN)<DARK_LIMIT;
  bool motion = digitalRead(PIR_PIN) == HIGH;
  digitalWrite(LED_PIN, dark || motion?HIGH:LOW);
}
