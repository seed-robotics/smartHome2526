// Complete example solution for Lesson04, challenge 02.
const int LIGHT_PIN = A1;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  Serial.print(reading);
  Serial.print(" ");
  Serial.println(reading < 500 ? "Darker" : "Brighter");
  delay(500);
}
