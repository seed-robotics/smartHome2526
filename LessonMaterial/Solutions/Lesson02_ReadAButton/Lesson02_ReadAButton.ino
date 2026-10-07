// Complete lesson example. See the kit guide for pin and wiring details.
const int BUTTON_PIN = 13;
void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(BUTTON_PIN));
  delay(500);
}
