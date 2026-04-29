#define RED  9   // pin that red led is connected to    
#define GREEN  10 // pin that
#define BLUE  11  // pin that blue led is connected
      
#define DELAY  20  // internal delay in ms

void setup() { 
Serial.begin(9600);
  // LED connection pi  Ssns to be set as an output
  pinMode(RED, OUTPUT);
  pinMode(GREEN,
  OUTPUT);
  pinMode(BLUE, OUTPUT);

}

void loop() {
  // fade from
  // red to green
   Serial.println(1);
  for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY); // wait before next transition
  }
   Serial.println(2);
   for(int i=0; i<255; i++) {
    analogWrite(GREEN, i); // red
    analogWrite(BLUE, 255-i); // green initially OFF
    analogWrite(RED, 255); // blue OFF
    delay(DELAY);
   }
    Serial.println(3);
   for(int i=0; i<255; i++) {
    analogWrite(RED, 255-i); // red
    analogWrite(GREEN, 255); // green initially OFF
    analogWrite(BLUE, i); // blue OFF
    delay(DELAY);
   }
    Serial.println(4);
 for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 255); // blue OFF
    delay(DELAY);
   }
    Serial.println(5);
    for(int i=0; i<255; i++) {
    analogWrite(RED, 255); // red
    analogWrite(GREEN, i); // green initially OFF
    analogWrite(BLUE, 255-i); // blue OFF
    delay(DELAY);
   }    
    Serial.println(6);
    for(int i=0; i<255; i++) {
    analogWrite(RED, 255); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 0); // blue OFF
    delay(DELAY);
   }
    Serial.println(7);
    for(int i=0; i<255; i++) {
    analogWrite(RED, 255-i); // red
    analogWrite(GREEN, 0); // green initially OFF
    analogWrite(BLUE, 0); // blue OFF
    delay(DELAY);
   } 
   Serial.println(8);
    for(int i=0; i<255; i++) {
    analogWrite(RED, 0); // red
    analogWrite(GREEN, i); // green initially OFF
    analogWrite(BLUE, 0); // blue OFF
    delay(DELAY);
   } 
   Serial.println(9);
    for(int i=0; i<255; i++) {
    analogWrite(RED, i); // red
    analogWrite(GREEN, 255-i); // green initially OFF
    analogWrite(BLUE, 0); // blue OFF
    delay(DELAY);
   } 
   Serial.println(10);
    for(int i=0; i<255; i++) {
    analogWrite(RED, 255-i); // red
    analogWrite(GREEN, i); // green initially OFF
    analogWrite(BLUE, i); // blue OFF
    delay(DELAY);
   } 
    
}