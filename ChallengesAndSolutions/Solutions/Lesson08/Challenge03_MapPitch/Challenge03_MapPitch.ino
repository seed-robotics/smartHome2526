// Complete example solution for Lesson08, challenge 03.
const int LIGHT_PIN = A0, BUZZER_PIN = 12;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int r = analogRead(LIGHT_PIN);
  int pitch = map(r, 0, 1023, 200, 800);
  tone(BUZZER_PIN, pitch);
  Serial.print(r);
  Serial.print(" ");
  Serial.println(pitch);
  delay(100);
}
