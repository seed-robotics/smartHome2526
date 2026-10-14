// Complete example solution for Lesson14, challenge 04.
const int RELAY_PIN = 8, BUTTON_PIN = 13;
int relayState = LOW, previous = LOW;
void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
  digitalWrite(RELAY_PIN, LOW);
}
void loop() {
  int pressed = digitalRead(BUTTON_PIN);
  if (pressed == HIGH && previous == LOW) {
    relayState = !relayState;
    digitalWrite(RELAY_PIN, relayState);
    Serial.println(relayState?"Relay on":"Relay off");
    delay(30);
  }
  previous = pressed;
}
