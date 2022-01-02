int trig = 2;
int echo = 4;
int buzzer = 6;
float echoTime;
float velocity = 359.00; //meters/sec in 30 degree celcius
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  
  
}

void loop() {
  digitalWrite(buzzer,LOW);
  digitalWrite(trig,LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(12);
  digitalWrite(trig,LOW);
  echoTime = (pulseIn(echo,HIGH)) / 1000000.00;
  distance = (velocity * echoTime) / 2.00;
  distance = distance * 100.00;
  if(distance < 65.00){
    analogWrite(buzzer,255);
    digitalWrite(8,HIGH);
  }
  Serial.println(distance);
}
