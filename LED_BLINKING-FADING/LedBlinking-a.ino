//Program Name: ledblinking
//Group Name: Hazim And Megat
//1.Hazim Farhan
//2.Megat M.Irfan

int ledpin1 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(14,OUTPUT);
  pinMode(ledpin1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin1,HIGH);
  delay(100);
  digitalWrite(14,HIGH);
  delay(50);
  digitalWrite(ledpin1,LOW);
  delay(100);
  digitalWrite(14,LOW);
  delay(50);
} 
