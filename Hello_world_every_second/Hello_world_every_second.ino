int seconds=0;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("hello world");
Serial.println(seconds);
delay(1000);
seconds=seconds+1;
}
