int trigPin = 13;
int echoPin = 12;
float echoTime; 
float speedSound;
float distance= 15;


void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  echoTime = pulseIn(echoPin,HIGH);
  speedSound = (2.00 * distance) / echoTime; 
  speedSound = (speedSound/100) * 1000000;
  Serial.print("The speed of sound is : ");
  Serial.print(speedSound);
  Serial.println(" meters per second");
  
  
}
