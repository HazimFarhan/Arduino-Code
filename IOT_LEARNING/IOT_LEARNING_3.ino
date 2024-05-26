// lab4: read analog signal and display its value 
// on serial monitor 
//   introduce variable 

int an_value;  // store digital value of analog signal 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);// define baud rate
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 an_value = analogRead(34);
  Serial.println (an_value); 
  if(an_value>2000)
  {
    digitalWrite(4,LOW); digitalWrite(2,HIGH); 
    }
  else
  {
  digitalWrite(4,HIGH); digitalWrite(2,LOW);
  }
}
