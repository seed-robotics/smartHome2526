// Complete example solution for Lesson12, challenge 03.
const int SOIL_PIN = A2;
const int DRY_LIMIT = 350, DAMP_LIMIT = 700;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int v = analogRead(SOIL_PIN);
  Serial.println(v<DRY_LIMIT?"Dry":v<DAMP_LIMIT?"Okay":"Damp");
  delay(500);
}
