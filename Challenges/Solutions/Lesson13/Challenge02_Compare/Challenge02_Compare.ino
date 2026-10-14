// Complete example solution for Lesson13, challenge 02.
const int GAS_PIN = A3;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int v = analogRead(GAS_PIN);
  Serial.println(v<500?"Near baseline":"Different from baseline");
  delay(500);
}
