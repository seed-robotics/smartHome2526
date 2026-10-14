// Complete lesson example. See the kit guide for pin and wiring details.
const int PIR_PIN = 2;
void setup() {
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(PIR_PIN) == HIGH?"Motion":"No motion");
  delay(250);
}
