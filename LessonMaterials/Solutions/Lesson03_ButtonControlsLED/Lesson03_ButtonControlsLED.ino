// Complete lesson example. See the kit guide for pin and wiring details.
// Toggle the LED once each time the active-HIGH button is pressed.
const int BUTTON_PIN = 13, LED_PIN = 12;
int previousState = LOW;
int ledState = LOW;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH && previousState == LOW) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    delay(30);
  }
  previousState = buttonState;
}
