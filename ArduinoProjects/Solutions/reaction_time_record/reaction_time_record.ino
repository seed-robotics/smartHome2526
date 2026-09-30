
//  13   5V
//   |   |
//  -------
//  |  O  |
//  -------
//   |   |
//   R-GND
unsigned long startTime;
float rTime;
int ledstate=0;
float bTime = 100.00;
void setup() {
  pinMode(13, INPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  delay(1000);
  Serial.println("Get Ready!");
  for (int countdown = 3; countdown > 0; countdown--){
    Serial.println(countdown);
    delay(1000);
  }
  for (int blinkDelay = 1000; blinkDelay > 0; blinkDelay -= 100){
    digitalWrite(12,ledstate);
    ledstate = !ledstate;
    delay(blinkDelay);
  }
  digitalWrite(12,0);
  delay(random(1000,5000));
  digitalWrite(12,HIGH);
  startTime = millis();
  while (digitalRead(13)==LOW){
    
  }
  digitalWrite(12,LOW);
  rTime = (millis() - startTime) / 1000.0;
  Serial.print("Your time was,");Serial.print(rTime);Serial.println("s");
  if (rTime < bTime){
    bTime = rTime;
    Serial.print("You broke the record! new Best Time = ");Serial.println(bTime);Serial.println("s");
  }
  delay(1000);
  
}
