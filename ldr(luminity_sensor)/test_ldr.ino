int LDR;
int inputPin = A0;

void setup() {
  Serial.begin(9600); 
  pinMode(inputPin,INPUT);

}

void loop() {
  LDR = analogRead(inputPin);
  Serial.println(LDR);
  delay(350);

}
