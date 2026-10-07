// Complete example solution for Lesson03, challenge 04.
const int BUTTON_PIN = 13, LED_PIN = 12;
int previousState = LOW, mode = 0;
unsigned long blinkAt = 0;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state == HIGH && previousState == LOW) {
    mode = (mode + 1) % 3;
    delay(30);
  }
  previousState = state;
  if (mode == 0) digitalWrite(LED_PIN, LOW);
  if (mode == 1) digitalWrite(LED_PIN, HIGH);
  if (mode == 2 && millis() - blinkAt >= 500) {
    blinkAt = millis();
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
  }
}
