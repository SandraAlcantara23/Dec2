/ definir los pines de los LEDs
const int ledRojo = 8;
const int ledAmarillo = 9;
const int ledVerde = 10;

void setup() {
  // Configurar los pines como salidas
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Encender el LED rojo
  digitalWrite(ledRojo, HIGH);
  delay(5000); // Mantener encendido por 5 segundos
  digitalWrite(ledRojo, LOW);

  // Encender el LED amarillo
  digitalWrite(ledAmarillo, HIGH);
  delay(2000); // Mantener encendido por 2 segundos
  digitalWrite(ledAmarillo, LOW);

  // Encender el LED verde
  digitalWrite(ledVerde, HIGH);
  delay(5000); // Mantener encendido por 5 segundos
  digitalWrite(ledVerde, LOW);
}
