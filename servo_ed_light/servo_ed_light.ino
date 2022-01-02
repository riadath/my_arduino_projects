int servo_pin = 6;
#include <Servo.h>
Servo pointer;
float pos;
void setup() {
  Serial.begin(9600);
  pointer.attach(servo_pin);
}

void loop() {
  Serial.println("Enter servo position in degree:");
  while(Serial.available()==0){}
  pos = Serial.parseFloat();
  int nigga;
  pointer.write(pos);
  while(Serial.available()==0){}
  nigga = Serial.parseInt();
}
