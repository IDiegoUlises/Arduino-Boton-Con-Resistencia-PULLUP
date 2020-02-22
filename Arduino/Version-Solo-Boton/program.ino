int pinBoton 2;

void setup() {
  pinMode(pinBoton, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  int boton = digitalRead(pinBoton);

  if (boton == 0) //HIGH
  {
    Serial.println("HIGH");
  }

  if (boton == 1) //LOW
  {
    Serial.println("LOW");
  }

}
