#include <Servo.h>
int servoPin = 6;
int servoPos = 0;
int delayTime = 0;
int sensorIn = A0;
int sensorValues;
float srv;
Servo pointer;
void setup() {

  Serial.begin(9600);
  pointer.attach(servoPin);
  pinMode(sensorIn,INPUT);

}

void loop() {
  sensorValues = analogRead(sensorIn);
  srv = 140.00-((138.00/1015.00)*sensorValues);
  Serial.println(srv);
  delay(delayTime);
  pointer.write(srv);
}
