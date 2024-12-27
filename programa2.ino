// Definir los pines de los LEDs para la vía 1
const int ledRojo1 = 8;
const int ledAmarillo1 = 9;
const int ledVerde1 = 10;

// Definir los pines de los LEDs para la vía 2
const int ledRojo2 = 11;
const int ledAmarillo2 = 12;
const int ledVerde2 = 13;

void setup() {
  // Configurar los pines como salidas para la vía 1
  pinMode(ledRojo1, OUTPUT);
  pinMode(ledAmarillo1, OUTPUT);
  pinMode(ledVerde1, OUTPUT);

  // Configurar los pines como salidas para la vía 2
  pinMode(ledRojo2, OUTPUT);
  pinMode(ledAmarillo2, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
}

void loop() {
  // Fase 1: Vía 1 en verde, Vía 2 en rojo
  digitalWrite(ledVerde1, HIGH);
  digitalWrite(ledRojo1, LOW);
  digitalWrite(ledRojo2, HIGH);
  delay(5000); // Mantener esta configuración por 5 segundos

  // Fase 2: Vía 1 en amarillo, Vía 2 sigue en rojo
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarillo1, HIGH);
  delay(2000); // Mantener esta configuración por 2 segundos
  digitalWrite(ledAmarillo1, LOW);

  // Fase 3: Vía 1 en rojo, Vía 2 en verde
  digitalWrite(ledRojo1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledRojo2, LOW);
  delay(5000); // Mantener esta configuración por 5 segundos

  // Fase 4: Vía 1 sigue en rojo, Vía 2 en amarillo
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarillo2, HIGH);
  delay(2000); // Mantener esta configuración por 2 segundos
  digitalWrite(ledAmarillo2, LOW);

  // Preparar para el siguiente ciclo
  digitalWrite(ledRojo1, LOW);
  digitalWrite(ledRojo2, HIGH);
}
