// Complete example solution for Lesson19, challenge 04.
const int LIGHT_PIN = A1, PIR_PIN = 2, LED_PIN = 9;
void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  static unsigned long printedAt = 0;
  if (millis()-printedAt >= 1000) {
    printedAt = millis();
    int light = analogRead(LIGHT_PIN);
    int motion = digitalRead(PIR_PIN);
    bool on = light<450 || motion == HIGH;
    digitalWrite(LED_PIN, on);
    Serial.print("Light: ");
    Serial.print(light);
    Serial.print(" Motion: ");
    Serial.print(motion == HIGH?"yes":"no");
    Serial.print(" LED: ");
    Serial.println(on?"on":"off");
  }
}
