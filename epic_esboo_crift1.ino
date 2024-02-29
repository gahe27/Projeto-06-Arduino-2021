#include <Servo.h>

const int pinServo = 3, pinPot = 0;

Servo braco;

void setup() 
{
  braco.attach(pinServo);
}

void loop()
{
  int valPot = analogRead(pinPot);
  
  valPot = map(valPot, 0, 1023, 0, 180);
  
  braco.write(valPot);
  
  delay(100);
}