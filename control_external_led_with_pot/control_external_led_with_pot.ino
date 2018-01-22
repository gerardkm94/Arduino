int led=3;
int led2=10;
int x;
int y;
int y2;
int s;
float z;
void setup() {
pinMode(led2,OUTPUT);
pinMode(led,INPUT);
Serial.begin(9600);
}
void loop() 
{
x=analogRead(led);
y2=map(x, 0, 1023, 0, 255);
analogWrite(led2,y2);
Serial.println(y2);
delay(1000);
}
