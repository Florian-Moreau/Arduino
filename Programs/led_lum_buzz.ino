/*
 * Créateur : Florian MOREAU
 * Date : 04/08/2018
 * Programme : Variation des diodes et buzzer en fonction de la lumière
 * Utilisation d'une plaque d'essaie contenant : Capteur de lumière, buzzer, 4 diodes
 */

int pinLight=2; //stocke le CAN utilisé
int valLight=0; //variable pour récupérer la valeur de tension du potentiomètre. On l'initialise à 0.
int pinLED=0;
void setup() {
  for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
  {
    pinMode(pinLED,OUTPUT); //mode OUTPUT pour le pin de LED
  }
 Serial.begin(9600); //initialisation de l'affichage
 Serial.println("Start");
}

void loop() {
  
  for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
  {
    valLight=analogRead(2); //lit la valeur de la tension, la numérise et la stocke dans valPot
    Serial.println(valLight); //affiche la valeur de la lumière capté dans la console du port série
    int valInter=map(valLight,256,1000,4,8); //fonction de mappage

    if (valLight > 256)
    {
    tone(3,valLight); //variation de la tonalité du buzzer
    }   
    if (valLight < 256)
    {
      noTone(3); //éteint le buzzer
    }
    Serial.println("fin");
  }
}
