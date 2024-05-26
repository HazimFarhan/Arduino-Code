#include <WiFi.h>  // esp32
const char* ssid     = "Hazim";
const char* password = "12345678";

WiFiClient client;   // 

void setup() {
WiFi.begin(ssid, password);
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
  
}
