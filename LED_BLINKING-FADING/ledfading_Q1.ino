//Program Name: ledfading Q1
//Group Name: Hazim And Megat
//1.Hazim Farhan
//2.Megat M.Irfan
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  // to make fading more faster , increase the fadeValue
  for (int fadeValue = 0; fadeValue <=225; fadeValue += 1){
    analogWrite(9,fadeValue);//pin 9 is for PWM
    delay(250);
  }
  for(int fadeValue = 225; fadeValue <=0;fadeValue-=1){
    analogWrite(9,fadeValue);
    delay(250);
  }
}
