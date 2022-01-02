String Name;
int age;
float height;


void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("Enter your name : ");
  while(Serial.available() == 0){}
  Name = Serial.readString();

  Serial.println("Enter your age : ");
  while(Serial.available() == 0){}
  age = Serial.parseInt();

  Serial.println("Enter your height : ");
  while(Serial.available() == 0){}
  height = Serial.parseFloat();

  Serial.println("\n");

  Serial.print("Your name is  : ");
  Serial.println(Name);
  Serial.print("Your age is : ");
  Serial.println(age);
  Serial.print("Your height is : ");
  Serial.println(height);

  Serial.println();
  
}
