boton = 2;

void setup()
{
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int pulsador = digitalRead(boton);

  if (pulsador == HIGH)
  {
    Serial.println("Boton presionado");
  }

  if (pulsador == LOW)
  {
    Serial.println("No has pulsado el boton");
  }

}
