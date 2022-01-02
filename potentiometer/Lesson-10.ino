 int potInput = A0;
 int readValue;
 int delayTime = 100;
 float Volt;
 void setup() {
  pinMode(potInput,INPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(potInput);
  Volt = readValue*(5.00/1023.00);
  Serial.println(Volt);
  delay(delayTime);

}
