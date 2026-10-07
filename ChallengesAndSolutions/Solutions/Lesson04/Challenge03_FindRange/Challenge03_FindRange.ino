// Complete example solution for Lesson04, challenge 03.
const int LIGHT_PIN = A1;
int lowest = 1023, highest = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int reading = analogRead(LIGHT_PIN);
  if (reading < lowest) lowest = reading;
  if (reading > highest) highest = reading;
  Serial.print("Reading ");
  Serial.print(reading);
  Serial.print(" Min ");
  Serial.print(lowest);
  Serial.print(" Max ");
  Serial.println(highest);
  delay(500);
}
