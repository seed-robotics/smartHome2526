// Play each pitch for the matching duration stored in the second array.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 523, 659, 784};
const int DURATIONS[] = {250, 350, 450, 600};
const int NOTE_COUNT = sizeof(NOTES) / sizeof(NOTES[0]);

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  for (int index = 0; index < NOTE_COUNT; index++) {
    tone(BUZZER_PIN, NOTES[index]);
    delay(DURATIONS[index]);
    noTone(BUZZER_PIN);
    delay(120);
  }
}

void loop() {
}
