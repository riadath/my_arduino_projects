#include <LiquidCrystal.h>
LiquidCrystal lcd(9,8,5,4,3,2);
int trig = 11;
int echo = 10;
double velocity = 359.00;
double distance;
double echotime;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Distance:");
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  digitalWrite(trig,LOW);
  delay(10);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  echotime = pulseIn(echo,HIGH);
  echotime = echotime/1000000.00;
  distance = (echotime * velocity);
  distance = (distance / 2.00)*100.00;
  lcd.setCursor(9,0);
  lcd.print("      ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  lcd.setCursor(9,0);
  lcd.print(distance);
  lcd.print("CM");
  lcd.setCursor(0,1);
  lcd.print("and ");
  lcd.print(distance/2.54);
  lcd.print(" inch");
  delay(200);
  lcd.setCursor(14,0);
  lcd.print("  ");
  lcd.setCursor(9,0);
}
