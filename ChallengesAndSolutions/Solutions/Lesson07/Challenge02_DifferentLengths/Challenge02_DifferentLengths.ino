// Play three notes with a different duration for each note.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 660, 880};
const int DURATIONS[] = {200, 400, 600};

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  for (int index = 0; index < 3; index++) {
    tone(BUZZER_PIN, NOTES[index]);
    delay(DURATIONS[index]);
    noTone(BUZZER_PIN);
    delay(100);
  }
}

void loop() {
}
