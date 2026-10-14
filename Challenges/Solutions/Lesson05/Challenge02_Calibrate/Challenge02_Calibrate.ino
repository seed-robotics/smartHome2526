// Complete example solution for Lesson05, challenge 02.
const int LIGHT_PIN = A1, LED_PIN = 5;
const int LIGHT_THRESHOLD = 500;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  digitalWrite(LED_PIN, reading >= LIGHT_THRESHOLD ? HIGH : LOW);
  Serial.println(reading);
  delay(200);
}
