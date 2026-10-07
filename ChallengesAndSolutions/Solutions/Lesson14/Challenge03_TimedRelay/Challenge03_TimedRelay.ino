// Complete example solution for Lesson14, challenge 03.
const int RELAY_PIN = 8, BUTTON_PIN = 13;
bool running = false;
unsigned long started = 0;
void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(RELAY_PIN, LOW);
}
void loop() {
  if (!running && digitalRead(BUTTON_PIN) == HIGH) {
    running = true;
    started = millis();
    digitalWrite(RELAY_PIN, HIGH);
    delay(30);
  }
  if (running && millis()-started >= 2000) {
    digitalWrite(RELAY_PIN, LOW);
    running = false;
  }
}
