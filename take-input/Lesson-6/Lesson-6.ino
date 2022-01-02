int LedOne = 8;  
int LedTwo = 3;  
float delayOneOn;   
float delayOneOff; 
float delayTwoOff;
float delayTwoOn; 
int blinkLedOne;  
int blinkLedTwo; 
String LEDone = "The LED one is blinking";
String LEDtwo = "The LED two is blinking";
String blinkNo = "You are one blink : "; 


void setup() {
  
  Serial.begin(9600); 
  pinMode(LedOne,OUTPUT);
  pinMode(LedTwo,OUTPUT); 

   Serial.println("Enter the number of blinks for LED one : "); 
  while(Serial.available() == 0){}
  blinkLedOne = Serial.parseInt();
  
  Serial.println("Enter the number of blinks for LED two : ");
  while(Serial.available() == 0){}
  blinkLedTwo = Serial.parseInt();
  
  Serial.println("Enter the delay time");
  while(Serial.available() == 0){ }
  delayOneOn = Serial.parseFloat();
  
  Serial.println("Enter the delay time");
  while(Serial.available() == 0){ }
  delayTwoOn = Serial.parseFloat();
  
  Serial.println("Enter the delay time");
  while(Serial.available() == 0){ }
  delayOneOff = Serial.parseFloat();
  
  Serial.println("Enter the delay time");
  while(Serial.available() == 0){ }
  delayTwoOff = Serial.parseFloat();

}

void loop() {
  Serial.println(LEDone);
  for(int i = 0;i < blinkLedOne;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    digitalWrite(LedOne,HIGH); 
    delay(delayOneOn);  
    digitalWrite(LedOne,LOW); 
    delay(delayOneOff);  
  }
  Serial.print("\n");
  Serial.println(LEDtwo);
  fpr(int i = 0;i < blinkLedTwo;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    digitalWrite(LedTwo,HIGH);
    delay(delayTwoOn);
    digitalWrite(LedTwo,LOW);
    delay(delayTwoOff);
  }

  
}
