void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int j = 0; //Declare that j is an int and set it equal to 1

  while (j <= 100){
    Serial.print("You are on loop number : ");
    Serial.println(j); 
    delay(250);
    j += 5;
  }
  Serial.println(" ");
  
}
