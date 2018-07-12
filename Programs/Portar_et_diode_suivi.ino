/*
 * ******************************** *
 * Programme Potar et diode suivi   *
 * Auteur Florian MOREAU            *
 * 25/05/2018                       *
 * Led suivi du potar               *
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
    int valInter=map(valPot,0,1024,0,13); //fonction de mappage
    if (pinLED==valInter)
    {
     digitalWrite(pinLED,HIGH); //on allume la LED
    }
    else
    {
     digitalWrite(pinLED,LOW); //on éteint la LED
    }
  }
}
