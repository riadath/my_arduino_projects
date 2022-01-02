#include <Servo.h>
Servo pointer;
int servo = 11;
int angle;
int r = 10,g = 9,b = 8;

void setup()
{
  pinMode(servo,OUTPUT);
  pointer.attach(servo);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  analogWrite(r,100);
  analogWrite(g,200);
  analogWrite(b,200);
}
