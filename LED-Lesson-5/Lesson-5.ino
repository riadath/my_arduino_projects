int LedOne = 8;  //Declaring LED one to pin 8
int LedTwo = 3;  //Decalring LED two to pin 3
int delayOneOn = 50;  //On time for LED one
int delayTwoOn = 50;  //On time for LED two
int delayOneOff = 50; //Off time for LED one
int delayTwoOff = 50; //Off time for LED two
int blinkLedOne = 5;  //Number of times LED one will blink
int blinkLedTwo = 5; //Number of times LED two will blink
String LEDone = "The LED one blink : ";//Declaring a string
String LEDtwo = "The LED two blink : ";//Declaring a string
String blinkNo = "Blink Number : "; //Declaring a string


void setup() {
  Serial.begin(9600);
  String wM = "Welcome Bro "; // Declaring a local varible
  String wM1 = "LED glow\n";// Declare string variable wm1 and assign a value
  Serial.println(wM);
  Serial.println(wM1);
  String wM2;
  wM2 = wM + wM1;
  Serial.println(wM2); 
  pinMode(LedOne,OUTPUT);
  pinMode(LedTwo,OUTPUT); 

}

void loop() {
  Serial.println(LEDone);
  for(int i = 0;i < blinkLedOne;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    digitalWrite(LedOne,HIGH); //Turning the LED one on
    delay(delayOneOn);  //LED one on time 
    digitalWrite(LedOne,LOW); //Turing the LED one off 
    delay(delayOneOff);  //LED one off time
  }
  Serial.print("\n");
  Serial.println(LEDtwo);
  
  for(int i = 0;i < blinkLedTwo;i++){
    Serial.print(blinkNo);
    Serial.println(i+1);
    digitalWrite(LedTwo,HIGH);
    delay(delayTwoOn);
    digitalWrite(LedTwo,LOW);
    delay(delayTwoOff);
  }

  
}
