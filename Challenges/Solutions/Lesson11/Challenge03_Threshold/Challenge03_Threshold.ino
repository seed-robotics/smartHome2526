// Complete example solution for Lesson11, challenge 03.
const int SENSOR_PIN = A0;
const int THRESHOLD = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(SENSOR_PIN);
  Serial.println(value>THRESHOLD?"Threshold reached":"Below threshold");
  delay(500);
}
