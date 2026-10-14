// Complete example solution for Lesson11, challenge 01.
const int SENSOR_PIN = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(SENSOR_PIN));
  delay(500);
}
