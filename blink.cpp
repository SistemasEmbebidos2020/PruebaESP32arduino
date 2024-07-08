#include <Arduino.h>      
// Declaración de la variable para el LED\
const int led = 2; // Cambia el número del pin según tu configuración

void setup() {
    pinMode(led, OUTPUT); // Configura el pin como salida digital
}

void loop() {
    digitalWrite(led, HIGH); // Enciende el LED
    delay(500); // Espera 500 milisegundos
    digitalWrite(led, LOW); // Apaga el LED
    delay(500); // Espera 500 milisegundos
}
