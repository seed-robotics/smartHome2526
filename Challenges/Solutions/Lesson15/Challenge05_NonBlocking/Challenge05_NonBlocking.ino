// Complete example solution for Lesson15, challenge 05.
const int FAN_PIN = 8, BUTTON_PIN = 13;
bool running = false, previous = LOW;
unsigned long started = 0, cooldownUntil = 0;
void setup() {
  pinMode(FAN_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(FAN_PIN, LOW);
}
void loop() {
  bool pressed = digitalRead(BUTTON_PIN) == HIGH;
  if (!running && millis() >= cooldownUntil && pressed && !previous) {
    running = true;
    started = millis();
    digitalWrite(FAN_PIN, HIGH);
  }
  if (running && millis()-started >= 5000) {
    digitalWrite(FAN_PIN, LOW);
    running = false;
    cooldownUntil = millis()+3000;
  }
  previous = pressed;
}
