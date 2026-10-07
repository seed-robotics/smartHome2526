const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;
const int STEP_DELAY_MS = 20;

void setup() {
  // TODO: Configure the red, green, and blue LED pins as OUTPUT.
}

void loop() {
  for (int brightness = 0; brightness <= 255; brightness++) {
    // TODO: Use analogWrite() to change the brightness of each color.
    // Try making one color brighter while another color gets dimmer.
    delay(STEP_DELAY_MS);
  }

  // TODO: Add another fade loop to create a different color transition.
}