int led = 13;
int state = LOW; 
long previousMillis = 0; 
long interval = 1000; 
void setup() 
{
pinMode(led, OUTPUT);
}
void loop()
{
unsigned long currentMillis = millis(); 
if (currentMillis - previousMillis > interval){
if (state == LOW){
previousMillis = currentMillis;
state = HIGH;
}
elsestate = LOW;
digitalWrite(led, state);
}
}
