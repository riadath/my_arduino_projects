//Riadath Akib
//Use 330 ohm resitors for optimal brightness


int LedOne = 3;
int LedTwo = 5;
int offTime = 500;


void setup() {
  Serial.begin(9600);
  pinMode(LedOne,OUTPUT);
  pinMode(LedTwo,OUTPUT);
}
void loop() {
  for(int i = 0;i <= 255;i++){
    Serial.print("i = :");
    Serial.println(i+1);
    delay(25);
    analogWrite(LedOne,i);
    analogWrite(LedTwo,i);
    if(i == 255){
      for(int j= 255;j >=0;j--){
        Serial.print("j = :");
        Serial.println(j);
        delay(19);
        analogWrite(LedOne,j);
        analogWrite(LedTwo,j);
      }
    }
  }
  delay(offTime);
  
}

