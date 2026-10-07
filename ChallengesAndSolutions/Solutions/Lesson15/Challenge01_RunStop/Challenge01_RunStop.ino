// Complete example solution for Lesson15, challenge 01.
const int FAN_PIN = 8;
void setup() {
  pinMode(FAN_PIN, OUTPUT);
}
void loop() {
  digitalWrite(FAN_PIN, HIGH);
  delay(2000);
  digitalWrite(FAN_PIN, LOW);
  delay(2000);
}
