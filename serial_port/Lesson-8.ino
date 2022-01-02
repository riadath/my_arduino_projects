//Riadath Akib
//An LED blinking program and the program is set to take input ......
//.....from the user through the serial monitor

int LedOne = 9;  
int LedTwo = 3;  
int delayOneOn = 100;   
int delayOneOff = 100; 
int delayTwoOff = 100;
int delayTwoOn = 100; 
int blinkLedOne = 5;  
int blinkLedTwo = 5; 
int writeValueOne;
int writeValueTwo;
String LEDone = "The LED one is blinking";
String LEDtwo = "The LED two is blinking";
String blinkNo = "You are on blink : "; 


void setup() {
  
  Serial.begin(9600); 
  pinMode(LedOne,OUTPUT);
  pinMode(LedTwo,OUTPUT); 
  
  Serial.println("Enter the analog write value for LED one : ");
  while(Serial.available() == 0){}
  writeValueOne = Serial.parseInt(); 
   Serial.println("Enter the analog write value for LED two: ");
  while(Serial.available() == 0){}
  writeValueTwo = Serial.parseInt(); 
}

void loop() {
  Serial.println(LEDone);
  for(int i = 0;i < blinkLedOne;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    analogWrite(LedOne,writeValueOne);
    delay(delayOneOn);  
    analogWrite(LedOne,0);
    delay(delayOneOff);  
  }
  Serial.print("\n");
  Serial.println(LEDtwo);
  for(int i = 0;i < blinkLedTwo;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    analogWrite(LedTwo,writeValueTwo);
    delay(delayTwoOn);
    analogWrite(LedTwo,0);
    delay(delayTwoOff);
  }

  
}
