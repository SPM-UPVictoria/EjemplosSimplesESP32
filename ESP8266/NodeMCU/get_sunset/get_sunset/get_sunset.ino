#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "Galaxy A5178E4";
const char* password = "envt2509";

void setup() {
  Serial.begin(9600);
  delay(10);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid); 
  WiFi.begin(ssid, password);
   

   while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

int value = 0;
void loop() {
  delay(5000);
  ++value;
  Serial.print("connecting to ");
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    HTTPClient http;
    http.begin("http://api.sunrise-sunset.org/json?lat=36.7201600&lng=-4.4203400");
    
    int httpCode = http.GET();
    if (httpCode > 0) { 
      String payload = http.getString();
      Serial.println(payload);
    }
    http.end(); 
     
}
 
delay(30000);
}
