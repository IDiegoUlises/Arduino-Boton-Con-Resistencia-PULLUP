int pinBoton = 2;
int led = 3;

void setup() {
  pinMode(pinBoton, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {

  int boton = digitalRead(pinBoton);

  if (boton == 0) //HIGH
  {
    digitalWrite(led, HIGH);
  }

  if (boton == 1) //LOW
  {
    digitalWrite(led, LOW);
  }

}
