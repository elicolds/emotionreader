#include <Servo.h>

// Pines del sensor ultrasónico
const int trigPin = 7;
const int echoPin = 2; // Ahora usamos el pin 2 para el Echo

// Servos
Servo servo1, servo2, servo3, servo4;
const int servoPin1 = 8;
const int servoPin2 = 9;
const int servoPin3 = 10;
const int servoPin4 = 11;

// Tira LED RGB
const int redPin = 3;    // Conecta al Gate del MOSFET para el canal Rojo
const int greenPin = 5;  // Conecta al Gate del MOSFET para el canal Verde
const int bluePin = 6;   // Conecta al Gate del MOSFET para el canal Azul

void setup() {
  // Configurar los pines del sensor ultrasónico
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Configurar los servos
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);

  // Configurar los pines de la tira LED
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Leer distancia del sensor ultrasónico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer el tiempo del eco
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  // Mapear la distancia a ángulos de los servos
  int angle = map(constrain(distance, 2, 30), 2, 30, 0, 90);

  // Mover los servos
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);

  // Simulación de emociones y control de LEDs
  setColor(255, 255, 0); // Amarillo (feliz)
  delay(2000);
  setColor(255, 0, 0);   // Rojo (enojado)
  delay(2000);
  setColor(0, 0, 255);   // Azul (triste)
  delay(2000);
  setColor(128, 0, 128); // Morado (sorprendido)
  delay(2000);
}

// Función para establecer el color
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
