  int led=3; 
  int led2=10;
  int led3=13;
  int led4=4;
  int x;
  int y;
  int y2;
  float z;
  unsigned long currentTime;
  unsigned long ElapsedTime;
  void setup() {
  Serial.begin(9600); //serial port initialization
  pinMode(led, INPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,INPUT);
  }
  void loop() {
  x=analogRead(led); 
  y = map(x, 0, 1023, 0, 500); 
  z=y/100.0;
  y2=map(x, 0, 1023, 0, 255);
  analogWrite(led2,y2);
  Serial.print("Potentiometer value");
  Serial.println(y2);
  delay(1000);
  digitalWrite(led3, HIGH); 
  Serial.println("LED 13 ON");
  delay(1000); 
  digitalWrite(led3, LOW); 
  Serial.println("LED 13 OFF");
  delay(1000);
  int val4=digitalRead(led4);
  if (val4==1){
   Serial.println("INPUT 4 ON");
   }
   else {
   Serial.println("INPUT 4 OFF");
  }
  delay(1000);
  }
