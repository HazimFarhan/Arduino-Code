//Program Name: ledblinking
//Group Name: Hazim And Megat
//1.Hazim Farhan
//2.Megat M.Irfan
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  delay(2000);
}
