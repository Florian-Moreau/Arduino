/*
 * ******************************** *
 * Programme Potar et diode vitesse *
 * Auteur Florian MOREAU            *
 * 23/05/2018                       *
 * Led clignotante reglage vitesse  *
 * ******************************** *
 */
 
int pinPot=0; //stocke le CAN utilisé
int valPot=0; //variable pour récupérer la valeur de tension du potentiomètre. On l'initialise à 0.
int pinLED=0;
void setup() {
  for(int pinLED = 0 ; pinLED < 13 ; pinLED++)
  {
    pinMode(pinLED,OUTPUT); //mode OUTPUT pour le pin de LED
  } 
}

void loop() {
  for(int pinLED = 0 ; pinLED < 13 ; pinLED++)
  {
    valPot=analogRead(A0); //lit la valeur de la tension, la numérise et la stocke dans valPot
    int valInter=map(valPot,0,1023,1,5); //fonction de mappage
    int attente=1000/valInter/2; // calcul du temps d'arrêt
    digitalWrite(pinLED,HIGH); //on allume la LED
    delay (attente); //attente calculée
    digitalWrite(pinLED,LOW); //on éteint la LED
    delay(attente); //même attente
  }
}
