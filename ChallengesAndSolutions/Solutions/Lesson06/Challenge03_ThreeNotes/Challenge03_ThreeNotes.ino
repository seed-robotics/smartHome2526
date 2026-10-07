// Play three notes in sequence, with a short silence after each one.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 660, 880};

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  for (int index = 0; index < 3; index++) {
    tone(BUZZER_PIN, NOTES[index]);
    delay(400);
    noTone(BUZZER_PIN);
    delay(200);
  }

  delay(1000);
}
