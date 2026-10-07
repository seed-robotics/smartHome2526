// Complete example solution for Lesson12, challenge 02.
const int SOIL_PIN = A2;
const int DRY_LIMIT = 500;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(SOIL_PIN);
  Serial.println(value<DRY_LIMIT?"Dry":"Damp");
  delay(500);
}
