// Complete example solution for Lesson11, challenge 02.
const int SENSOR_PIN = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(SENSOR_PIN);
  Serial.print(value);
  Serial.println(value<500?" Lower":" Higher");
  delay(500);
}
