// Complete example solution for Lesson14, challenge 05.
const int RELAY_PIN = 8, BUTTON_PIN = 13, LED_PIN = 12;
int relayState = LOW, previous = LOW;
void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
}
void loop() {
  int pressed = digitalRead(BUTTON_PIN);
  if (pressed == HIGH && previous == LOW) {
    relayState = !relayState;
    digitalWrite(RELAY_PIN, relayState);
    digitalWrite(LED_PIN, relayState);
    delay(30);
  }
  previous = pressed;
}
