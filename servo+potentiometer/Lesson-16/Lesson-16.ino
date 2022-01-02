#include <Servo.h>
int pos = 0;
int ServoPin = 6;
int Sdelay = 20;
int potPos = A0;
int pot;
Servo pointer;
void setup() {
   Serial.begin(9600);
   pointer.attach(ServoPin);
   pinMode(potPos,INPUT);

}

void loop() { 
  pot = analogRead(potPos);
  Serial.print(pot);
  Serial.print("    "); 
  pos = (165.00/1023.00)*pot + 10;
  Serial.println(pos);
  pointer.write(pos);

}
