// Complete example solution for Lesson09, challenge 05.
const int LED_PIN = 9, LIGHT_PIN = A1;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int light = analogRead(LIGHT_PIN);
  int brightness = map(light, 0, 1023, 255, 0);
  analogWrite(LED_PIN, constrain(brightness, 0, 255));
  delay(50);
}
