#include <Servo.h>

int ServoPin = 9;
int trigPin = 13;
int echoPin = 12;

float echoTime;
float distance; //In centimeters
float speedSound = 358.5; //In meters per second
float ServoPos;
Servo pointer;

void setup() 
{
  Serial.begin(9600);
  pinMode(ServoPin,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pointer.attach(ServoPin);

}

void loop()
{
  digitalWrite(trigPin,LOW);
  delay(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  echoTime = pulseIn(echoPin,HIGH);
  echoTime = echoTime / 1000000.;
  distance = speedSound * echoTime;
  distance = (distance / 2.) * 100.;
  ServoPos = (120.00/11) * distance;
  pointer.write(ServoPos);
  Serial.print("Distance of the object : ");
  Serial.print(distance);
  Serial.println(" centimeters");
  delay(200);
}




