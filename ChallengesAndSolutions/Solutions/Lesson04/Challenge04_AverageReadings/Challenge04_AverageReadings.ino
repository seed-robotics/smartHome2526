// Complete example solution for Lesson04, challenge 04.
const int LIGHT_PIN = A1;
void setup() {
  Serial.begin(9600);
}
void loop() {
  long total = 0;
  for (int i = 0; i < 10; i++) {
    total + = analogRead(LIGHT_PIN);
    delay(10);
  }
  int average = total / 10;
  Serial.print("Latest ");
  Serial.print(analogRead(LIGHT_PIN));
  Serial.print(" Average ");
  Serial.println(average);
  delay(500);
}
