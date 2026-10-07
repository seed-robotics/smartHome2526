const int BUTTON_PIN = 13;
const int LED_PIN = 12;

unsigned long startTime = 0;
float reactionSeconds = 0;
float bestSeconds = 100.0;

void setup() {
  // This exercise uses an external pull-down resistor and an active-HIGH button.
  // TODO: Configure BUTTON_PIN as INPUT and LED_PIN as OUTPUT.
  // TODO: Start Serial at 9600 baud.
}

void loop() {
  Serial.println("Get ready!");

  // TODO: Show a countdown before the signal.
  // TODO: Turn the LED on after a random wait and record millis().
  // TODO: Wait for the button to read HIGH, then turn off the LED.
  // TODO: Calculate and print the reaction time in seconds.

  if (reactionSeconds < bestSeconds) {
    // TODO: Save the new best time and print a record message.
  }

  // TODO: Pause briefly before starting another round.
}