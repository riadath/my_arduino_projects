int pinRed = 9;
int pinGreen = 10;
int pinBlue = 11;
unsigned int pulse;
int rColorS;
int gColorS;
int bColorS;
int S2 = 7;
int S3 = 8;
int outPin = 4;

void setup() { 
  Serial.begin(9600);
  pinMode(pinRed,OUTPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinBlue,OUTPUT);

  pinMode(S2,OUTPUT);
  pinMode(S3,OUTPUT);
  pinMode(outPin,INPUT);
  
}

void loop() {
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  pulse = pulseIn(outPin,LOW);
  rColorS = pulse/400. -1;
  rColorS = 255 - rColorS;

  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  pulse = pulseIn(outPin,LOW);
  gColorS = pulse/400. -1;
  gColorS = 255 - gColorS;


  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  pulse = pulseIn(outPin,LOW);
  bColorS = pulse/400. -1;
  bColorS = 255 - bColorS;

  Serial.print(rColorS);
  Serial.print(",");
  Serial.print(gColorS);
  Serial.print(",");
  Serial.println();

  if(rColorS > gColorS && gColorS > bColorS){
    rColorS = 255;
    gColorS = gColorS / 2;
    bColorS = 0;
  }

  if(rColorS > bColorS && bColorS > gColorS){
    rColorS = 255;
    bColorS = bColorS / 2;
    gColorS = 0;
  }

  if(gColorS > rColorS && rColorS > bColorS){
    gColorS = 255;
    rColorS = rColorS / 2;
    bColorS = 0;
  }
  
  if(gColorS > bColorS && bColorS > rColorS){
    gColorS = 255;
    bColorS = bColorS / 2;
    rColorS = 0;
  }

  if(bColorS > rColorS && rColorS > gColorS){
    bColorS = 255;
    rColorS = rColorS / 2;
    gColorS = 0;
  }

  if(bColorS > gColorS && gColorS > rColorS){
    bColorS = 255;
    gColorS = gColorS / 2;
    rColorS = 0;
  }

  analogWrite(pinRed,rColorS);
  analogWrite(pinGreen,gColorS);
  analogWrite(pinBlue,bColorS);
}
















