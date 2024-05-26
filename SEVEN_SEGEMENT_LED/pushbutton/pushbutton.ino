//Program Name: pushbutton
//Group Name: Hazim And Megat
//1.Hazim Farhan
//2.Megat M.Irfan
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pushbuttonvalue = digitalRead(3);
  Serial.println(pushbuttonvalue);
}
