// Complete example solution for Lesson12, challenge 01.
const int SOIL_PIN = A2;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(SOIL_PIN));
  delay(500);
}
