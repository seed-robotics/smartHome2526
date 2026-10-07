// Complete example solution for Lesson15, challenge 03.
const int FAN_PIN = 8, BUTTON_PIN = 13;
bool running = false;
unsigned long started = 0;
void setup() {
  pinMode(FAN_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(FAN_PIN, LOW);
}
void loop() {
  if (!running && digitalRead(BUTTON_PIN) == HIGH) {
    running = true;
    started = millis();
    digitalWrite(FAN_PIN, HIGH);
    delay(30);
  }
  if (running && millis()-started >= 5000) {
    digitalWrite(FAN_PIN, LOW);
    running = false;
  }
}
