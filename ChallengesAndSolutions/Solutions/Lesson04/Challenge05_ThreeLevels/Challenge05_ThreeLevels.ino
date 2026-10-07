// Complete example solution for Lesson04, challenge 05.
const int LIGHT_PIN = A1;
const int DIM_LIMIT = 350, BRIGHT_LIMIT = 700;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  const char* level = reading < DIM_LIMIT ? "Dim" : reading < BRIGHT_LIMIT ? "Medium" : "Bright";
  Serial.print(reading);
  Serial.print(" ");
  Serial.println(level);
  delay(500);
}
