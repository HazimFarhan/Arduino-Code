#define TRIG_PIN 5
#define ECHO_PIN 18
float duration_us, distance_cm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,HIGH);

  duration_us = pulseIn(ECHO_PIN,HIGH);

  distance_cm = 0.017 * duration_us;

  Serial.print("distance");
  Serial.print(distance_cm);
  Serial.println("cm");

  delay(500);
  
}
