#define RED  9   // pin that red led is connected to    
#define GREEN  10 // pin that
#define BLUE  11  // pin that blue led is connected
      
#define DELAY  20  // internal delay in ms

void setup() { 
Serial.begin(9600);
  // LED connection pins to be set as an output
  pinMode(RED, OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {
  // fade from
  // red to green
  Serial.println("for1");
  for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red ON
    analogWrite(GREEN, 255-i); // green gradually ON
    analogWrite(BLUE, 255-i); // blue gradually ON
    delay(DELAY); // wait before next transition
  }
  Serial.println("for2");
   for(int i=0; i<255; i++) {
    analogWrite(RED, 255-i); // red ON
    analogWrite(GREEN, i); // green gradually ON
    analogWrite(BLUE, i); // Blue gradually ON
    delay(DELAY);
   }
   Serial.println("for3");
   for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY);
   }
   Serial.println("for4");
  for(int i=0; i<255; i++) {
    analogWrite(RED, 255); // red
    analogWrite(GREEN, i); // green initially OFF
    analogWrite(BLUE, 255-i); // blue OFF
    delay(DELAY); // wait before next transition
}
Serial.println("for5");
for(int i=0; i<255; i++) {
    analogWrite(RED, 255); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, i); // blue OFF
    delay(DELAY); // wait before next transition
}
Serial.println("for6");
for(int i=0; i<255; i++) {
    analogWrite(RED, 255-i); // red
    analogWrite(GREEN, i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY); // wait before next transition
}
Serial.println("for7");
for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY); // wait before next transition
}
}