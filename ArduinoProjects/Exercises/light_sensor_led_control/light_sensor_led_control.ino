const int LED_PIN = 5;
const int LIGHT_SENSOR_PIN = A1;
const int LIGHT_THRESHOLD = 900;

void setup() {
  // TODO: Configure LED_PIN as OUTPUT.
  // TODO: Start Serial at 9600 baud.
}

void loop() {
  int lightReading = 0;

  // TODO: Read LIGHT_SENSOR_PIN and store the result in lightReading.
  // TODO: Print lightReading to the Serial Monitor.

  if (lightReading < LIGHT_THRESHOLD) {
    // TODO: Turn the LED off.
  } else {
    // TODO: Turn the LED on.
  }

  // TODO: Add a short delay before the next reading.
}