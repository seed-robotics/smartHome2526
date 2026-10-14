// Complete example solution for Lesson13, challenge 03.
const int GAS_PIN = A3;
const int BASELINE = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int v = analogRead(GAS_PIN);
  Serial.print(v);
  Serial.println(v>BASELINE?" above baseline":" below baseline");
  delay(500);
}
