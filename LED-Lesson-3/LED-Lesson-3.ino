int LedOne = 8;  //Declaring LED one to pin 8
int LedTwo = 3;  //Decalring LED two to pin 3
int delayOneOn = 300;  //On time for LED one
int delayTwoOn = 250;  //On time for LED two
int delayOneOff = 300; //Off time for LED one
int delayTwoOff = 250; //Off time for LED two


void setup() {
  
  pinMode(LedOne,OUTPUT);
  
  pinMode(LedTwo,OUTPUT);

}

void loop() {
  
  for(int i = 0;i < 5;i++){
    digitalWrite(LedOne,HIGH); //Turning the LED one on
    delay(delayOneOn);  //LED one on time 
    digitalWrite(LedOne,LOW); //Turing the LED one off 
    delay(delayOneOff);  //LED one off time
  }
  for(int i = 0;i < 3;i++){
    digitalWrite(LedTwo,HIGH);
    delay(delayTwoOn);
    digitalWrite(LedTwo,LOW);
    delay(delayTwoOff);
  }

  
}
