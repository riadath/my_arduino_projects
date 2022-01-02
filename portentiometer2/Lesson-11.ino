int PinLed = 9;
int PotPin = A0;
int readValue;
float inVolt;
int delayTime = 50;

void setup() {

  pinMode(PinLed,OUTPUT);
  pinMode(PotPin,INPUT);
  Serial.begin(9600);
 
}

void loop() {

    readValue = analogRead(PotPin);
    inVolt = (255.00/1023.00)*readValue;
    Serial.print("You are writing  : ");
    Serial.println(inVolt);
    analogWrite(PinLed,inVolt);
    delay(delayTime);
}
