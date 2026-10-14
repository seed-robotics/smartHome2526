// Complete example solution for Lesson10, challenge 03.
const int PIR_PIN = 2;
int previous = LOW;
unsigned long count = 0;
void setup() {
  pinMode(PIR_PIN, INPUT);
  Serial.begin(9600);
}
void loop() {
  int state = digitalRead(PIR_PIN);
  if (state == HIGH && previous == LOW) {
    count++;
    Serial.println(count);
  }
  previous = state;
}
