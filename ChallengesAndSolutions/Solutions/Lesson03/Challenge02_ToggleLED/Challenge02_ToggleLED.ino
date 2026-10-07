// Complete example solution for Lesson03, challenge 02.
const int BUTTON_PIN = 13, LED_PIN = 12;
int previousState = LOW, ledState = LOW;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state == HIGH && previousState == LOW) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    delay(30);
  }
  previousState = state;
}
