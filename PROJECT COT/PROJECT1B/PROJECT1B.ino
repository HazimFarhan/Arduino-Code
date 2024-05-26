int pb1 = 5;
int pb2 = 18;
int led1 = 13;
int led2 = 27;
int led3 = 2;
void setup() {
  
  pinMode(pb1,INPUT);
  pinMode(pb1,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {

  int pushbuttonvalue1 = digitalRead(pb1);
  int pushbuttonvalue2 = digitalRead(pb2);
  
  while (led1 == 0){
    if (pushbuttonvalue1 == HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    delay(500);      
    }
  }
  if (pushbuttonvalue2 == HIGH){   
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }  

}
