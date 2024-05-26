int led = 2;
#define ANT 1000

void setup() {
  // put your setup code here, to run once:
  pinMode(34,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(34);
  Serial.println(data);
  if (data > ANT){
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
 
}
