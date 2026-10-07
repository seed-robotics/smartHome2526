// Play the four-note tune twice, then report that playback has finished.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 523, 659, 784};
const int DURATIONS[] = {250, 350, 450, 600};
const int NOTE_COUNT = sizeof(NOTES) / sizeof(NOTES[0]);

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);

  for (int repeat = 0; repeat < 2; repeat++) {
    for (int index = 0; index < NOTE_COUNT; index++) {
      tone(BUZZER_PIN, NOTES[index]);
      delay(DURATIONS[index]);
      noTone(BUZZER_PIN);
      delay(120);
    }
  }

  Serial.println("Finished");
}

void loop() {
}
