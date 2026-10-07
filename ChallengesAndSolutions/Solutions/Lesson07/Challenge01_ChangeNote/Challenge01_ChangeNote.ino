// Play a three-note tune. Change the middle pitch to make a different tune.
const int BUZZER_PIN = 12;
const int NOTES[] = {440, 700, 880};

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);

  for (int index = 0; index < 3; index++) {
    tone(BUZZER_PIN, NOTES[index]);
    delay(400);
    noTone(BUZZER_PIN);
    delay(150);
  }
}

void loop() {
}
