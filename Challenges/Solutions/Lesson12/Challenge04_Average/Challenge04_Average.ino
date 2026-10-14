// Complete example solution for Lesson12, challenge 04.
const int SOIL_PIN = A2;
const int DRY_LIMIT = 350, DAMP_LIMIT = 700;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long total = 0;
  for (int i = 0;i<5;i++) {
    total+ = analogRead(SOIL_PIN);
    delay(10);
  }
  int v = total/5;
  Serial.println(v<DRY_LIMIT?"Dry":v<DAMP_LIMIT?"Okay":"Damp");
  delay(500);
}
