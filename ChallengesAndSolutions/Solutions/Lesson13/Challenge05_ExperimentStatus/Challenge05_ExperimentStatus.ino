// Complete example solution for Lesson13, challenge 05.
const int GAS_PIN = A3;
const int BASELINE = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long total = 0;
  for (int i = 0;i<5;i++) {
    total+ = analogRead(GAS_PIN);
    delay(10);
  }
  int average = total/5;
  Serial.print("Not a safety alarm. Experiment only. Reading: ");
  Serial.print(average);
  Serial.println(average>BASELINE?" changed":" near baseline");
  delay(500);
}
