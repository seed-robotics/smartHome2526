// Complete example solution for Lesson15, challenge 02.
const int FAN_PIN = 8, BUTTON_PIN = 13;
void setup() {
  pinMode(FAN_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  digitalWrite(FAN_PIN, digitalRead(BUTTON_PIN) == HIGH?HIGH:LOW);
}
