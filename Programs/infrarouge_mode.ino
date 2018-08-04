/*
 * Créateur : Florian MOREAU
 * Date : 04/08/2018
 * Programme : Utilise l'infrarouge pour allumer ou éteindre les diodes
 * Utilisation d'une télécommande infrarouge couplé avec une plaque d'essaie contenant : Capteur infrarouge et 4 diodes
 * Bibliothéque : IRremote
 */

#include <IRremote.h>

int broche_reception = 2; // broche utilisée
int tmp = 0; //Variable temporaire
int pinLED;
int pause = 500;
IRrecv reception_ir(broche_reception); // crée une instance
decode_results decode_ir; // stockage données reçues

void setup()
{
  for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
  {
    pinMode(pinLED,OUTPUT); //mode OUTPUT pour le pin de LED
  } 
  
  Serial.begin(9600);
  reception_ir.enableIRIn(); // démarre la réception
  Serial.println("Start");
}

void loop()
{
  if (reception_ir.decode(&decode_ir))
  {
    Serial.println(decode_ir.value);

    //bouton 1
    if (decode_ir.value == 16724175) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton 1
    {
      tmp = 1;
    }
    //bouton 2
    if (decode_ir.value == 16718055) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton 2
    {
      tmp = 2;
    }
    //bouton 3
    if (decode_ir.value == 16743045) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton 3
    {
      tmp = 3;
    }
    //bouton 4
    if (decode_ir.value == 16716015) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton
    {
      tmp = 4;
    }
    //bouton power
    if (decode_ir.value == 16753245) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton power
    {
      tmp = 404;
    }
    //Bouton test
    if (decode_ir.value == 16720605) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton test
    {
      tmp = 405;
    }
    //bouton pause
    if (decode_ir.value == 16754775) // Le grand nombre correspond à se que la console du port série écrit lors de l'appuie du bouton pause
    {
      tmp = 406;
    }
    
    //Utilisation de TMP
    switch (tmp) //Switch permet d'étudier chaque cas (case X) de TMP
    {
     case 1:
      digitalWrite(4,HIGH); //on allume la LED
     break;
     
     case 2:
      digitalWrite(5,HIGH); //on allume la LED
     break;
     
     case 3:
      digitalWrite(6,HIGH); //on allume la LED
     break;
     
     case 4:
      digitalWrite(7,HIGH); //on allume la LED
     break;
     
     case 404:
      for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
        {
          digitalWrite(pinLED,LOW); //on allume la LED
        }
      break;
      
     case 405:
      for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
       {
        digitalWrite(pinLED,HIGH); // Envoi de courant dans une connexion
        delay(pause);
       }
     break;
     
     case 406:
      for(int pinLED = 4 ; pinLED < 8 ; pinLED++)
        {
         digitalWrite(pinLED,LOW); // Envoi de courant dans une connexion
         delay(pause);
        }
     break;
    }
    reception_ir.resume(); // reçoit le prochain code
  }
}
