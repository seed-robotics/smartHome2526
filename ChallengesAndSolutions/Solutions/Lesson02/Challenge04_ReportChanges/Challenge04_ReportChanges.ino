// Complete example solution for Lesson02, challenge 04.
const int BUTTON_PIN = 13;
int previousState = LOW;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(BUTTON_PIN);
  if (state != previousState) {
    Serial.println(state == HIGH ? "Button pressed" : "Button released");
    previousState = state;
    delay(30);
  }
}
