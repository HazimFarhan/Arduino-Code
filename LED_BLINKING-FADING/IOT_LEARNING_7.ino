// for connected to thingspeak wireless
#include <ThingSpeak.h>
#include <WiFi.h>  // esp32
const char* ssid     = "Hazim";
const char* password = "12345678";
unsigned long ChannelID =  1218348;
const char* WriteAPIKey = "WBHD1YBK33UH3TWV";
const char* ReadAPIKey = "ARVQJN8OTZ64T0DV";

int led_status;
int an_value;
WiFiClient client;   // 

void setup() {

WiFi.begin(ssid, password);
ThingSpeak.begin(client);
pinMode(2,OUTPUT); //ESP 32
Serial.begin(115200);
 // We start by connecting to a WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password); 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
 }
  Serial.print("");
  Serial.println("WIFI connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}
void loop()
{
  led_status = ThingSpeak.readFloatField(ChannelID,2,ReadAPIKey);
  if(led_status==1)digitalWrite(2,HIGH);
  else digitalWrite(2,LOW);
 an_value = analogRead(33);
 ThingSpeak.writeField(ChannelID,1,an_value,WriteAPIKey);
 Serial.println(an_value);
}
