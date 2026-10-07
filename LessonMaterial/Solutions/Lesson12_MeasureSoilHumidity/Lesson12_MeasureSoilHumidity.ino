// Complete lesson example. See the kit guide for pin and wiring details.
const int SOIL_PIN = A2;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(SOIL_PIN));
  delay(500);
}
