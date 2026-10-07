// Exercise: Use the light sensor to control the buzzer pitch.
// TODO: Read the sensor, convert its reading to a pitch from about 200 to
// 450 Hz, play that pitch, and print the reading for testing.

const int SPEAKER_PIN = 12;
const int LIGHT_SENSOR_PIN = A0;

void setup() {
  // TODO: Start Serial at 9600 baud so you can inspect the sensor reading.
}

void loop() {
  int lightReading = 0;
  int pitch = 200;

  // TODO: Read the light sensor and store the value in lightReading.
  // TODO: Use lightReading to calculate a pitch between about 200 and 450 Hz.
  // TODO: Play pitch on SPEAKER_PIN with tone().
}