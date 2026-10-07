// Complete example solution for Lesson05, challenge 05.
const int LIGHT_PIN = A1, LED_PIN = 5;
void flash(int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(150);
    digitalWrite(LED_PIN, LOW);
    delay(150);
  }
}
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  if (reading < 350) flash(1);
  else if (reading < 700) flash(2);
  else flash(3);
  delay(1000);
}
