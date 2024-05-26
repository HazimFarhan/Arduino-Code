//Program Name: ledblinking
//Group Name: Hazim And Megat
//1.Hazim Farhan
//2.Megat M.Irfan
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
}
