int LedOne = 8;  //Declaring LED one to pin 8
int LedTwo = 3;  //Decalring LED two to pin 3
int delayOneOn = 500;  //On time for LED one
int delayTwoOn = 500;  //On time for LED two
int delayOneOff = 500; //Off time for LED one
int delayTwoOff = 500; //Off time for LED two
int blinkLedOne = 5;  //Number of times LED one will blink
int blinkLedTwo = 5; //Number of times LED two will blink

void setup() {
  
  Serial.begin(9600 );
  pinMode(LedOne,OUTPUT);
  pinMode(LedTwo,OUTPUT); 

}

void loop() {
  Serial.println("The LED one blink : ");
  for(int i = 0;i < blinkLedOne;i++){
    Serial.print("Blink Number : ");
    Serial.println(i+1);
    digitalWrite(LedOne,HIGH); //Turning the LED one on
    delay(delayOneOn);  //LED one on time 
    digitalWrite(LedOne,LOW); //Turing the LED one off 
    delay(delayOneOff);  //LED one off time
  }
  Serial.print("\n");
  Serial.println("The LED two blink : ");
  
  for(int i = 0;i < blinkLedTwo;i++){
    Serial.print("Blink Number : ");
    Serial.println(i+1);
    digitalWrite(LedTwo,HIGH);
    delay(delayTwoOn);
    digitalWrite(LedTwo,LOW);
    delay(delayTwoOff);
  }

  
}
