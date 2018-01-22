int led=3;
int x;
int y;
float z;
void setup() {
Serial.begin(9600);
}
void loop() {
x=analogRead(led);//Values from 0 to 1023
y = map(x, 0, 1023, 0, 500);//Maping value to another range from 
//set from 0 to 5 V
z=y/100.0;//Divide by 100 for downgrade 500 to 5
y2=map(x, 0, 1023, 0, 255); //Downgrade 1023 to 255 
//In this way we can control the brightness 
analogWrite(led2,y2);
Serial.println(y2);
delay(1000);//Refresh the mapped value every second
}

 
