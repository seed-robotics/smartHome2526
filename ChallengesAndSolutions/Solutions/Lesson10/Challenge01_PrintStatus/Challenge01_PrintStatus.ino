// Complete example solution for Lesson10, challenge 01.
const int PIR_PIN = 2;
void setup() {
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(PIR_PIN) == HIGH?"Motion":"No motion");
  delay(250);
}
