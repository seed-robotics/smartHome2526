#define RED  9   // pin that red led is connected to    
#define GREEN  10 // pin that
#define BLUE  11  // pin that blue led is connected
      
#define DELAY  20  // internal delay in ms

void setup() { 

  // LED connection pins to be set as an output
  pinMode(RED, OUTPUT);
  pinMode(GREEN,
  OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {
  // fade from
  // red to green
  for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY); // wait before next transition
  }
   for(int i=0; i<255; i++) {
    analogWrite(GREEN, i); // red
    analogWrite(RED, 255-i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY);
   }
   for(int i=0; i<255; i++) {
    analogWrite(RED, 255); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, i); // blue OFF
    delay(DELAY);
   }
}