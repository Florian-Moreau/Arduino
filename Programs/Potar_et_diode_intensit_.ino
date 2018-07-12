/*
 * ******************************** *
 * Programme Potar et diode intense *
 * Auteur Florian MOREAU            *
 * 23/05/2018                       *
 * Led reglage intensite            *
 * ******************************** *
 */
int valPota = 0;  // Initialise la variable qui va recueillir la valeur du potentiomètre
int lumLED = 0;   // Initialise la variable qui va recueillir la valeur du potentiomètre
int pinPota = A0; // La broche à laquelle le potentiomètre est connecté
int pinLed = 9;   // La broche à laquelle la LED est connectée

void setup() {
  for(int pinLed = 0 ; pinLed < 13 ; pinLed++)
  {
    pinMode(pinLed, OUTPUT);
  }
}

void loop() {
  for(int pinLed = 0 ; pinLed < 13 ; pinLed++)
  {
    valPota = analogRead(A0);          // Lis la valeur du potentiomètre
    lumLED = map(valPota, 0, 1023, 0, 255);   // Discrétise la valeur du potentiomètre et l'assigne à la valeur de la luminisoté de la LED
    analogWrite(pinLed, lumLED);              // Met la LED à sa nouvelle luminositée
  }
}
