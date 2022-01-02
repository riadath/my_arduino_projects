#include <Servo.h>
Servo pointer;
int servo_pin = 6;
int t = A0;
void setup() {
  Serial.begin(9600);
  pinMode(t,INPUT);
  pinMode(servo_pin,OUTPUT);
  pointer.attach(servo_pin);
}

void loop() {
  int input = analogRead(t);
  Serial.print(input);
  Serial.print("    ");
  float servo_pos = (180.0/(930.0-10.0))*(input - 10.0);
  Serial.println(servo_pos);
  if(servo_pos > 95){
    analogWrite(9,255);
  }
  if(servo_pos < 95){
    analogWrite(9,0);
  }
  pointer.write(servo_pos);
  delay(100);
}
