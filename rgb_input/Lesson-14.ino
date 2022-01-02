int pinRed = 9;
int pinGreen = 10;
int pinBlue = 11;
int redBrightness = 155;
int greenBrightness = 155;
int blueBrightness = 155;
String colorChoice;

void setup() {

  Serial.begin(9600);
  pinMode(pinRed,OUTPUT);
  pinMode(pinGreen,OUTPUT);
  pinMode(pinBlue,OUTPUT);
  

}

void loop() {
  Serial.println("Please enter your color : ");
  while(Serial.available()==0){}
  colorChoice = Serial.readString();  

  if(colorChoice == "red"){
    analogWrite(pinRed,redBrightness);
    analogWrite(pinBlue,0);
    analogWrite(pinGreen,0);
  }

   if(colorChoice == "green"){
    analogWrite(pinRed,0);
    analogWrite(pinBlue,0);
    analogWrite(pinGreen,greenBrightness);
  }

  
 
  if(colorChoice == "blue"){
    analogWrite(pinRed,0);
    analogWrite(pinBlue,blueBrightness);
    analogWrite(pinGreen,0);
  }

   if(colorChoice == "yellow"){
    analogWrite(pinRed,0);
    analogWrite(pinBlue,0);
    analogWrite(pinGreen,greenBrightness);
  }

  else{
    Serial.println("Please enter a valid color name");
  }
  
  
}
