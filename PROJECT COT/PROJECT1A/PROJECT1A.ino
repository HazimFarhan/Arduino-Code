
void setup() {
  // put your setup code here, to run once:
  pinMode(5,INPUT);
  pinMode(18,INPUT);
  pinMode(13,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pushbuttonvalue1 = digitalRead(5);
  int pushbuttonvalue2 = digitalRead(18);
  if(pushbuttonvalue1 == HIGH)
  {
    digitalWrite(13,HIGH);
    digitalWrite(27,HIGH);
    digitalWrite(2,HIGH);
  }
  if (pushbuttonvalue2 == HIGH)
  {
    digitalWrite(13,HIGH);
    digitalWrite(27,HIGH);
    digitalWrite(2,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    digitalWrite(27,LOW);
    digitalWrite(2,LOW);
    delay(250);
    digitalWrite(13,HIGH);
    digitalWrite(27,HIGH);
    digitalWrite(2,HIGH);
    delay(250);
  }
  else{
    digitalWrite(13,LOW);
    digitalWrite(27,LOW);
    digitalWrite(2,LOW);
  }
}
