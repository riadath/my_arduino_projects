#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,5,4,3,2);

int trigPin = 11;
int echoPin = 6;

float echoTime;
float distance; //In centimeters
float speedSound = 346.0; //In meters per second

void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

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
  Serial.println(distance);
  lcd.setCursor(9,0);
  lcd.print("       ");
  lcd.setCursor(9,0);
  lcd.print(distance);
  lcd.print("cm");
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(0,1);
  lcd.print("and ");
  distance = distance / 2.54;
  lcd.print(distance);
  Serial.println(distance);
  lcd.print(" inches");
  delay(300);
  
  
}
