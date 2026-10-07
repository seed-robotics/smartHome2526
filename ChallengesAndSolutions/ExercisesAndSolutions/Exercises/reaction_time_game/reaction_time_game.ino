// Exercise: Build a reaction-time game with a random starting delay.
// TODO: Wait for a random 1-3 seconds, signal with the LED, measure how long
// it takes for the button press, print the result, and start another round.

const int BUTTON_PIN = 13;
const int LED_PIN = 12;

unsigned long startTime = 0;
float reactionSeconds = 0;

void setup() {
  // This exercise uses an external pull-down resistor and an active-HIGH button.
  // TODO: Configure BUTTON_PIN as INPUT and LED_PIN as OUTPUT.
  // TODO: Start Serial at 9600 baud.
}

void loop() {
  Serial.println("Get ready...");

  // TODO: Wait a random time between 1 and 3 seconds.
  // TODO: Record the start time with millis().
  // TODO: Turn on the LED to signal the player.
  // TODO: Wait until BUTTON_PIN reads HIGH.
  // TODO: Calculate the reaction time in seconds.
  // TODO: Turn off the LED and print the reaction time.

  // TODO: Add a short countdown before starting the next round.
}