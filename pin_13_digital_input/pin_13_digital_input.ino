int Din = 3; //Entrada digital puerto 3
int Dout = 13; //Salida digital puerto 13
int valor;
void setup() {
  Serial.begin(9600);
  pinMode(Din, INPUT); //Declaramos el puerto de entrada como digital input
  pinMode(Dout, OUTPUT); //Fijamos puerto 13 como salida digital
}
void loop() {
  valor = digitalRead(Din); //Leemos el valor del potenciometro
  digitalWrite(Dout,valor); //Imprimimos la salida por el puerto digital 13 activando
}
