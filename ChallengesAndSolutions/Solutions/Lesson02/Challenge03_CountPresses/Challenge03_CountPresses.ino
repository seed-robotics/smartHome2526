// Complete example solution for Lesson02, challenge 03.
const int BUTTON_PIN = 13;
int previousState = LOW;
unsigned long lastChange = 0;
int presses = 0;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state == HIGH && previousState == LOW && millis() - lastChange > 30) {
    presses++;
    Serial.println(presses);
    lastChange = millis();
  }
  if (state != previousState) lastChange = millis();
  previousState = state;
}
