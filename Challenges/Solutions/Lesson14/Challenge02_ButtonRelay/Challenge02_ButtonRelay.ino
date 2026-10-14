// Complete example solution for Lesson14, challenge 02.
const int RELAY_PIN = 8, BUTTON_PIN = 13;
void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(RELAY_PIN, LOW);
}
void loop() {
  digitalWrite(RELAY_PIN, digitalRead(BUTTON_PIN) == HIGH?HIGH:LOW);
}
