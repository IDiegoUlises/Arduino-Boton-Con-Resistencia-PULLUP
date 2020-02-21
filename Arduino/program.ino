void setup() {
  pinMode(2, INPUT_PULLUP);// pin 2 se conecta a gnd
  pinMode(3, OUTPUT); // este pin se conecta al buzzer o el led
  Serial.begin(9600);
}

void loop() {

  int estado = digitalRead(2);

  if (estado == LOW) //HIGH
  {
    Serial.println("HIGH");
    digitalWrite(3, LOW);
  }

  if (estado == HIGH) //LOW
  {
    Serial.println("LOW");
    digitalWrite(3, HIGH);
  }

}
