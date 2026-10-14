// Complete example solution for Lesson13, challenge 01.
const int GAS_PIN = A3;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(GAS_PIN));
  delay(500);
}
