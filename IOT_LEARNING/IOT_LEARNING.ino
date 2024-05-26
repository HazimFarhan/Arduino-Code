// lab1: turn on/off LED GPI02
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT); // define GPIO2 as output pin

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (2,HIGH); // give value 1 to GPI02  // high lampu low lampu tutup
 delay(1000);
 digitalWrite (2,LOW);
 delay(1000);

}
