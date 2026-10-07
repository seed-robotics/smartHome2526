// Complete example solution for Lesson02, challenge 01.
const int BUTTON_PIN = 13;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(BUTTON_PIN));
  delay(500);
}
