void setup() {
  // put your setup code here, to run once:
  pinMode(34,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(34);
  if (data == HIGH){
    Serial.println("GOOD");
    digitalWrite(2,HIGH);
  }
  else {
    Serial.println("BAD");
    digitalWrite(2,LOW);
  }
}
