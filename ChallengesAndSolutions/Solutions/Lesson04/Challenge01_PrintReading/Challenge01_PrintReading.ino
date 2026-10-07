// Complete example solution for Lesson04, challenge 01.
const int LIGHT_PIN = A1;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(LIGHT_PIN));
  delay(500);
}
