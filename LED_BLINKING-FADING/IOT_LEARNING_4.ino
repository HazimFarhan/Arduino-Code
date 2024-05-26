// the number of the LED pin
const int ledPin = 2; // 16 corresponds to GPIO16
                       // GPIO pin that connects to LED
// setting PWM properties
int i;
const int freq = 5000;
const int ledChannel = 0; // PWM Generator 
const int resolution = 12; // same resolution with analogue input


void setup(){
// configure LED PWM functionalitites
ledcSetup(ledChannel, freq, resolution);
// attach the channel to the GPIO to be controlled
ledcAttachPin(ledPin, ledChannel);
}
void loop(){
for(i=0;i<2095;i++)
{
ledcWrite(ledChannel,i);
delay(3);
  
}
}
