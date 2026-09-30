const int SPEAKER_PIN = 12;
const int NOTE_COUNT = 10;
const int notes[NOTE_COUNT] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};

void setup() {
  for (int index = 0; index < NOTE_COUNT; index++) {
    // TODO: Play notes[index] on SPEAKER_PIN.
    // TODO: Wait half a second so each note can be heard.
  }

  // TODO: Stop the speaker after the sequence with noTone().
}

void loop() {
  // The note sequence plays once in setup().
}