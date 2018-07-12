/*
 * ******************************** *
 * Programme Diode variation        *
 * Auteur Florian MOREAU            *
 * 24/05/2018                       *
 * Diode progressive                *
 * ******************************** *
 */
int diode = 5; // broche de la LED
int i = 0; // variable de la boucle for

void setup() // setup est déroulé une seule fois après la remise à zéro
{                
  pinMode(diode, OUTPUT); // la broche diode     
}
void loop() // loop est déroulé indéfiniment
{
  for (;i<255;i++) // i varie de 1 à 255
    {
    analogWrite(diode,i); // génère une impulsion sur la broche de largeur i => la luminosité augmente
    delay(10); // pause de 10 ms entre chaque pas
    }
  for (;i>0;i--) // i varie de 1 à 255
    {
    analogWrite(diode,i); // génère une impulsion sur la broche de largeur i => la luminosité augmente
    delay(10); // pause de 10 ms entre chaque pas
    }  
}

// broche variable : 3 5 6 9 10 11 
