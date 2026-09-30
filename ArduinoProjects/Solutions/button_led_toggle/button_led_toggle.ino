int previousState = LOW;
int ledState = LOW; 

void setup() {
  pinMode(13, INPUT); 
  pinMode(12, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(13);

  // Αν το κουμπί άλλαξε κατάσταση
  if (buttonState != previousState) {
    delay(50);
    buttonState = digitalRead(13);

    if (buttonState != previousState) {
      previousState = buttonState;

      // and the button is pressed
      if (buttonState == HIGH) {
        ledState = !ledState;
        digitalWrite(12, ledState);
        Serial.print("LED state = ");
        Serial.println(ledState);
      }
    }
  }
}
