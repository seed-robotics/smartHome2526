int previousState = HIGH;
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
    // και είναι πατημένο
    if (buttonState == 1) {
      ledState = !ledState;      
      digitalWrite(12, ledState);
      Serial.print("LED state = ");
      Serial.println(ledState);
    }
    delay(50);
  }

  previousState = buttonState;
}
