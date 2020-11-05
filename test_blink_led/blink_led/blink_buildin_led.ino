#define ONBOARD_LED 2   // Definimos el led del dispositivo
/*
 * Blink
 */

 // the setup function runds once when you press reset or power the board
 void setup() {
  // initialize digital pin ledPin as an output
  pinMode(ONBOARD_LED, OUTPUT);
 }

 // the loop function runs over and over again forever
 void loop() {
  digitalWrite(ONBOARD_LED, HIGH);
  delay(5000);  // 5 segundos
  digitalWrite(ONBOARD_LED, LOW);
  delay(2000);  // 2 segundos
 }
