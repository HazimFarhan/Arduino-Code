void setup() {
  pinMode(34,INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = analogRead(34);
  Serial.println(data);

}
