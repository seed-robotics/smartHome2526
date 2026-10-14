// Play three notes with a longer silent rest after the second note.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 660, 880};

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  for (int index = 0; index < 3; index++) {
    tone(BUZZER_PIN, NOTES[index]);
    delay(400);
    noTone(BUZZER_PIN);

    if (index == 1) {
      delay(1000);
    } else {
      delay(150);
    }
  }
}

void loop() {
}
