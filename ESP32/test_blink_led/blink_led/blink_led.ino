/*
 * Blink
 */

 // ledPin refers to ESP32 GPIO 32
const int ledPin = 23;
 

 // the setup function runds once when you press reset or power the board
 void setup() {
  Serial.begin(9600);
  // initialize digital pin ledPin as an output
  Serial.print("El led debe estar conectado en el pin:");
  Serial.println(ledPin);
  pinMode(ledPin, OUTPUT);
 }

 // the loop function runs over and over again forever
 void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("led prendido");
  delay(5000);
  digitalWrite(ledPin, LOW);
  Serial.println("led apagado");
  delay(2000);
 }
