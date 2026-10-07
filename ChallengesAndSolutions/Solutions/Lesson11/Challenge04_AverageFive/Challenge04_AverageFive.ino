// Complete example solution for Lesson11, challenge 04.
const int SENSOR_PIN = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long total = 0;
  for (int i = 0;i<5;i++) {
    total+ = analogRead(SENSOR_PIN);
    delay(10);
  }
  Serial.println(total/5);
  delay(500);
}
