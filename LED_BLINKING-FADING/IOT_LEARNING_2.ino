int sw_status; // Define Variable 
void setup() {
  // put your setup code here, to run once:
  pinMode (2,OUTPUT); //Define GPI02 as OUTPUT pin
  pinMode (4,INPUT); // Define GPI04 as INPUT pin
}

void loop() {
  // put your main code here, to run repeatedly:
  sw_status = digitalRead(4);
  if(sw_status == 1) digitalWrite(2,HIGH);
  else digitalWrite (2,LOW);

}
