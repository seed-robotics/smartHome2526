// Complete example solution for Lesson02, challenge 02.
const int BUTTON_PIN = 13;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) Serial.println("Pressed");
  else Serial.println("Released");
  delay(500);
}
