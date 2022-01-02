int inputPin = A0;
int ledPin = 6;
int readValue;
double writeValue;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  readValue = analogRead(inputPin);
  delay(300);
  Serial.println(readValue);
 // Serial.println(readValue);
  writeValue = (51.0/191.0) * (45.0 - readValue) + 255.00;
  if(writeValue <= 20){
    writeValue = 0;
  }
/* analogWrite(ledPin,writeValue);
  Serial.print((5.0/255.0)*writeValue);
  Serial.print(" volts  and  ");
  writeValue = (5.0/255.00) * writeValue;
  writeValue = (writeValue/330.00) * 1000;
  Serial.print(writeValue);
  Serial.print(" mili amp");
  Serial.println(" ");*/

}











