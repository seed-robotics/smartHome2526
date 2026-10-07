// Complete example solution for Lesson10, challenge 04.
const int PIR_PIN = 2, LED_PIN = 12;
unsigned long detectedAt = 0;
void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  if (digitalRead(PIR_PIN) == HIGH) detectedAt = millis();
  digitalWrite(LED_PIN, millis()-detectedAt<5000?HIGH:LOW);
}
