// Complete lesson example. See the kit guide for pin and wiring details.
const int SENSOR_PIN = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(analogRead(SENSOR_PIN));
  delay(500);
}
