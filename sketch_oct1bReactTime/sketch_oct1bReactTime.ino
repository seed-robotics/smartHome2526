int ranTime = 0;
int startTime = 0;
float reacTime = 0;
int i;

void setup() {
pinMode(13,INPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println("GET READY...");

ranTime = random(1000, 3000);
delay(ranTime);
startTime = millis();
digitalWrite(12,HIGH);
while (digitalRead(13) != 1){}
reacTime = (millis() - startTime)/1000.0;
Serial.print("Your time was: ");Serial.print(reacTime);Serial.println("seconds");
digitalWrite(12,LOW);
Serial.println("Next round in...");
for (i = 3; i > 0; i--) {
  Serial.println(i);
  delay(1000);
}

}
