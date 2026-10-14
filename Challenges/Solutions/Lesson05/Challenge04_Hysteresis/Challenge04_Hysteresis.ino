// Complete example solution for Lesson05, challenge 04.
const int LIGHT_PIN = A1, LED_PIN = 5;
bool ledOn = false;
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  if (!ledOn && reading < 450) ledOn = true;
  if (ledOn && reading > 550) ledOn = false;
  digitalWrite(LED_PIN, ledOn ? HIGH : LOW);
}
