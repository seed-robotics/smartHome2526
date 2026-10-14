// Complete example solution for Lesson11, challenge 05.
const int SENSOR_PIN = A0;
const int THRESHOLD = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long total = 0;
  for (int i = 0;i<5;i++) {
    total+ = analogRead(SENSOR_PIN);
    delay(10);
  }
  int average = total/5;
  Serial.print(average);
  Serial.print(" Experiment only - not a safety alarm: ");
  Serial.println(average>THRESHOLD?"Reading changed":"Normal experiment reading");
  delay(500);
}
