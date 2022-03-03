#include <Adafruit_NeoPixel.h>
int led = 1; //digital pin 1 (Red LED on the Trinket)
void setup() {
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(500);

}
