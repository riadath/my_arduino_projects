int pinRed = 6;
int pinGreen = 5;
int pinBlue = 3;
int redBrightness = 255;
int greenBrightness =55;
int blueBrightness = 0;

void setup() {

  Serial.begin(9600);
  pinMode(pinRed,OUTPUT); 
  pinMode(pinGreen,OUTPUT);
  pinMode(pinBlue,OUTPUT);

}

void loop() {

  analogWrite(pinRed,redBrightness);
  analogWrite(pinGreen,greenBrightness);
  analogWrite(pinBlue,blueBrightness);

}
