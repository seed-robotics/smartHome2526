// Complete example solution for Lesson03, challenge 03.
const int BUTTON_PIN = 13, LED_A = 12, LED_B = 11;
int previousState = LOW, selected = 0;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_A, OUTPUT);
  pinMode(LED_B, OUTPUT);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state == HIGH && previousState == LOW) {
    selected = !selected;
    delay(30);
  }
  previousState = state;
  digitalWrite(LED_A, selected == 0);
  digitalWrite(LED_B, selected == 1);
}
