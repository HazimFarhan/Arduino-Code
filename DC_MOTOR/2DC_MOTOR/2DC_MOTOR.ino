// the number of the LED pin
const int IN1 = 15;  
const int IN2 = 2;
const int IN3 = 19;  
const int IN4 = 21;
// setting PWM properties
const int freq = 10000;
const int CH1 = 0;
const int CH2 = 1;
const int CH3 = 2;
const int CH4 = 4;
const int resolution = 4;

// ultrasonic pin setup
const int TRIG_PIN = 34;
const int ECHO_PIN = 35; 

long duration;
int distance;
 
void setup(){
  // ultrasonic setup
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // configure LED PWM functionalitites
  ledcSetup(CH1, freq, resolution);
  ledcSetup(CH2, freq, resolution);
  ledcSetup(CH3, freq, resolution);
  ledcSetup(CH4, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(IN1, CH1);
  ledcAttachPin(IN2, CH2);
  ledcAttachPin(IN3, CH3);
  ledcAttachPin(IN4, CH4);
  Serial.begin(9600);
}
 
void loop(){
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);    
    digitalWrite(TRIG_PIN, LOW);
    
    duration = pulseIn(ECHO_PIN, HIGH);

    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.println(distance);

    int dutyCycleFull = 100;
    int dutyCycleZero = 0;

    if (distance >30){
      ledcWrite(CH1, dutyCycleZero);
      ledcWrite(CH3, dutyCycleZero);
      Serial.println("STOP ");
      delay(1000);
    }
    else{
    ledcWrite(CH1, dutyCycleFull);
    ledcWrite(CH3, dutyCycleFull);
    Serial.println("FWD ");
    delay(3000);

    ledcWrite(CH1, dutyCycleZero);
    ledcWrite(CH3, dutyCycleZero);
    Serial.println("STOP ");
    delay(1000);
  
    ledcWrite(CH2, dutyCycleFull);
    ledcWrite(CH4, dutyCycleFull);
    Serial.println("REV ");
    delay(3000);

    ledcWrite(CH2, dutyCycleZero);
    ledcWrite(CH4, dutyCycleZero);
    Serial.println("STOP ");
    delay(1000);
}
}
