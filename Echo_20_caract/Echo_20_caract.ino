String inputString ;
char message[20];
int m=0;

// a string to hold incoming data
//boolean stringComplete = false;  // whether the string is complete

void setup() {
  // initialize serial:
  Serial.begin(9600);

}

void loop() {
      m=0;
     inputString= Serial.readString();
        for(int i=0;i<inputString.length();i++){
          for(int b=0;b<20;b++){
            message[b]=inputString[b+m];
          }
          Serial.print(message);
          Serial.println();
          m=m+20;
        }
        delay(1000);
}



