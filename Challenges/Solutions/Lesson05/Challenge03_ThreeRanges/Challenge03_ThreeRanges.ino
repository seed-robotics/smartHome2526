// Complete example solution for Lesson05, challenge 03.
const int LIGHT_PIN = A1, LED_PIN = 5;
unsigned long blinkAt = 0;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  if (reading < 400) digitalWrite(LED_PIN, LOW);
  else if (reading > 700) digitalWrite(LED_PIN, HIGH);
  else if (millis() - blinkAt >= 500) {
    blinkAt = millis();
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
}
