// DEFINIR PINES DE SALIDAS PARA SEMÁFOROS
// SEMÁFORO 1
const int ledVerde1 = 13;
const int ledAmarillo1 = 12;
const int ledRojo1 = 11;
// SEMÁFORO 2
const int ledVerde2 = 10;
const int ledAmarillo2 = 9;
const int ledRojo2 = 8;

void setup() {
  // CONFIGURAR LOS PINES COMO SALIDAS
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledAmarillo1, OUTPUT);
  pinMode(ledRojo1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledAmarillo2, OUTPUT);
  pinMode(ledRojo2, OUTPUT);
}

void loop() {
  // SECUENCIA SEMÁFORO 1 EN VERDE Y SEMÁFORO 2 EN ROJO
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledRojo1, LOW);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledRojo2, HIGH);
  delay(5000);

  // PARPADEO DEL VERDE DEL SEMÁFORO 1
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledVerde1, LOW);
    delay(500);
    digitalWrite(ledVerde1, HIGH);
    delay(500);
  }
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarillo1, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo1, LOW);
  digitalWrite(ledRojo1, HIGH);

  // SECUENCIA SEMÁFORO 2 EN VERDE Y SEMÁFORO 1 EN ROJO
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledRojo2, LOW);
  delay(5000);

  // PARPADEO DEL VERDE DEL SEMÁFORO 2
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledVerde2, LOW);
    delay(500);
    digitalWrite(ledVerde2, HIGH);
    delay(500);
  }
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarillo2, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo2, LOW);
  digitalWrite(ledRojo2, HIGH);
}
