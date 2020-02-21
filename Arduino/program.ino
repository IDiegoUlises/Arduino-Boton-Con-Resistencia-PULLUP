int boton 2;
int led = 3;

void setup() {
  pinMode(boton, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int estado = digitalRead(boton);

  if (estado == 0) //HIGH
  {
    Serial.println("HIGH");
    digitalWrite(led, HIGH);
  }

  if (estado == 1) //LOW
  {
    Serial.println("LOW");
    digitalWrite(led, LOW);
  }

}
