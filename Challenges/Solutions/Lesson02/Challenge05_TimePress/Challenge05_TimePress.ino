// Complete example solution for Lesson02, challenge 05.
const int BUTTON_PIN = 13;
int previousState = LOW;
unsigned long pressedAt = 0;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state == HIGH && previousState == LOW) pressedAt = millis();
  if (state == LOW && previousState == HIGH) {
    Serial.print("Held for ");
    Serial.print(millis() - pressedAt);
    Serial.println(" ms");
  }
  previousState = state;
}
