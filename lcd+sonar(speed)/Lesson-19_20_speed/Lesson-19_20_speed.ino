#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);

int trigPin = 13;
int echoPin = 12;

float echoTime;
float distance = 0.15; //In centimeters
float speedSound; //In meters per second

void setup() {
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  LCD.print("Velocity :");
  
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delay(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  echoTime = pulseIn(echoPin,HIGH);
  echoTime = echoTime / 1000000.00;
  speedSound = 2.0 * distance / (echoTime);
  Serial.println(speedSound);
  LCD.setCursor(0,1);
  LCD.print("                ");
  LCD.setCursor(0,1);
  LCD.print(speedSound);
  LCD.print(" m/s");
  Serial.println(speedSound);
  delay(800);
  
  
}
