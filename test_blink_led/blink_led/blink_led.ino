/*
 * Blink
 */

 // ledPin refers to ESP32 GPIO 32
const int ledPin = 23;
 

 // the setup function runds once when you press reset or power the board
 void setup() {
  // initialize digital pin ledPin as an output
  pinMode(ledPin, OUTPUT);
 }

 // the loop function runs over and over again forever
 void loop() {
  digitalWrite(ledPin, HIGH);
  delay(5000);
  digitalWrite(ledPin, LOW);
  delay(2000);
 }
