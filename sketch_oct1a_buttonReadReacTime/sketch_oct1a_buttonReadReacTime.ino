
//  13   5V
//   |   |
//  -------
//  |  O  |
//  -------
//   |   |
//   R-GND
float time;
float rTime;
int ledstate=0;
float bTime = 100.00;
void setup() {
  pinMode(13, INPUT_PULLUP); 
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  Serial.println("Get Ready!");
  for (int i=4;i--;i<1){
    Serial.println(i);
    delay(1000);
  }
  for (int i=1000;i=i-100;i>0){
    digitalWrite(12,ledstate);
    ledstate = !ledstate;
    delay(i);
  }
  digitalWrite(12,0);
  delay(random(1000,5000));
  digitalWrite(12,HIGH);
  time = millis();
  while (digitalRead(13)==0){
    
  }
  digitalWrite(12,LOW);
  rTime = (millis()-time)/1000;
  Serial.print("Your time was,");Serial.print(rTime);Serial.println("s");
  if (rTime < bTime){
    bTime = rTime;
    Serial.print("You broke the record! new Best Time = ");Serial.println(bTime);Serial.println("s");
  }
  delay(1000);
  
}
