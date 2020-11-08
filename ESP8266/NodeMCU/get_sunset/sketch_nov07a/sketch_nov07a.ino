/* This sketch sends data via HTTP GET requests to esp8266-shop.com
and returns the website in html format which is printed on the console */
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "Galaxy A5178E4"; //replace with your own wifi ssid
const char* password = "envt2509"; //replace with your own //wifi ssid password 
const char* host = "upvictoria.edu.mx";

void setup() {
  Serial.begin(9600);
  delay(10); // We start by connecting to a WiFi network
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
    HTTPClient http;  //Declare an object of class HTTPClient
    http.begin("http://api.sunrise-sunset.org/json?lat=36.7201600&lng=-4.4203400");  //Specify request destination
    
    int httpCode = http.GET();                                                                  //Send the request 
    if (httpCode > 0) { //Check the returning code
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
    }
    http.end();   //Close connection
     
}
 
delay(30000);    //Send a request every 30 seconds
}
