/*
 * ******************************** *
 * Programme Diode et potar         *
 * Auteur Florian MOREAU            *
 * 24/05/2018                       *
 * Diode varie avec le potar        *
 * ******************************** *
 */
 
// Déclaration et remplissage du tableau...
// ...représentant les broches des LEDs
const int leds[10] = {2,3,4,5,6,7,8,9,10,11};
// le potentiomètre sera branché sur la broche analogique 0
const int potar = 0;
// variable stockant la tension mesurée
int tension = 0;

void setup()
{
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        // déclaration de la broche en sortie
        pinMode(leds[i], OUTPUT);
        // mise à l'état haut
        digitalWrite(leds[i], HIGH);
    }
}

void loop()
{
    // on récupère la valeur de la tension du potentiomètre et on affiche sur les LEDs cette tension
    afficher(analogRead(potar));
}


void afficher(int valeur)
{
    int i;
    for(i=0; i < 10; i++)
    {
        if(valeur < (i*100))
            digitalWrite(leds[i], LOW); // on allume la LED
        else
            digitalWrite(leds[i], HIGH); // ou on éteint la LED
    }
}
