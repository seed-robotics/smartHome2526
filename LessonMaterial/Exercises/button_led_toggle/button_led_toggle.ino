const int BUTTON_PIN = 13;
const int LED_PIN = 12;

int previousButtonState = LOW;
int ledState = LOW;

void setup() {
  // TODO: Set the button pin as INPUT and the LED pin as OUTPUT.
  // TODO: Start Serial at 9600 baud so you can print the LED state.
}

void loop() {
  int buttonState = LOW;

  // TODO: Read the button and store the result in buttonState.
  if (buttonState != previousButtonState) {
    if (buttonState == HIGH) {
      // TODO: Toggle ledState between HIGH and LOW.
      // TODO: Write ledState to the LED pin.
      // TODO: Print the new LED state to Serial Monitor.
    }

    // TODO: Add a short debounce delay.
  }

  // TODO: Save buttonState so you can detect the next change.
}