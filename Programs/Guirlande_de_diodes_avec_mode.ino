/*
 * ******************************** *
 * Programme Diode guirlande        *
 * Auteur Florian MOREAU            *
 * 24/05/2018                       *
 * Variation de diode diverse mode  *
 * ******************************** *
 */
const int combi=27;
const int combi2=13;
const int combi3=2;
const int nbrLed=13;
const int pause=100;
int start=1;
int pinLed[13]={0,1,2,3,4,5,6,7,8,9,10,11,12}; // Tableau listant les pins
//Tableau à double entrée listant l’état (booléen 1 allumé, 0 éteint) des LED à chaque séquence
boolean affichage[combi][nbrLed]={
  0,0,0,0,0,0,0,0,0,0,0,0,1,
  0,0,0,0,0,0,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,0,0,0,0,0,0,0,0,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,0,0,0,0,0,0,1,0,0,0,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,
  0,0,0,0,0,0,0,0,0,1,0,0,0,
  0,0,0,0,0,0,0,0,0,0,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1};
 boolean affichage2[combi2][nbrLed]={
  0,0,0,0,0,0,1,0,0,0,0,0,0,
  0,0,0,0,0,1,0,1,0,0,0,0,0,
  0,0,0,0,1,0,0,0,1,0,0,0,0,
  0,0,0,1,0,0,0,0,0,1,0,0,0,
  0,0,1,0,0,0,0,0,0,0,1,0,0,
  0,1,0,0,0,0,0,0,0,0,0,1,0,
  1,0,0,0,0,0,0,0,0,0,0,0,1,
  0,1,0,0,0,0,0,0,0,0,0,1,0,
  0,0,1,0,0,0,0,0,0,0,1,0,0,
  0,0,0,1,0,0,0,0,0,1,0,0,0,
  0,0,0,0,1,0,0,0,1,0,0,0,0,
  0,0,0,0,0,1,0,1,0,0,0,0,0,
  0,0,0,0,0,0,1,0,0,0,0,0,0};
boolean affichage3[combi3][nbrLed]={ 
  1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0,0};

void setup() {
  for (int i=0;i<13;i++)
  {
    pinMode(pinLed[i],OUTPUT);
    digitalWrite(pinLed[i],LOW);
  }
  
}

void loop() {
  if (start==1)
  {
   for (int i=0;i<combi;i++) // boucle de séquence d'affichage
    {
     for (int p=0;p<nbrLed;p++) // boucle pour chaque pin
     {
       boolean etat=affichage[i][p]; // on va chercher l'état pour le pin
        digitalWrite(pinLed[p],etat); // on met le pin concerné à l'état
     }
      //tous les pins sont dans l'état de la séquence en cours
      delay(pause); //petite pause d'affichage
      // on passe à la séquence suivante
    }
  }
  else if (start==2)
  {
    for (int i=0;i<combi2;i++) // boucle de séquence d'affichage
    {
     for (int p=0;p<nbrLed;p++) // boucle pour chaque pin
     {
       boolean etat=affichage2[i][p]; // on va chercher l'état pour le pin
        digitalWrite(pinLed[p],etat); // on met le pin concerné à l'état
     }
      //tous les pins sont dans l'état de la séquence en cours
      delay(pause); //petite pause d'affichage
      // on passe à la séquence suivante
    }
  }
  else if (start==3)
  {
    for (int i=0;i<combi3;i++) // boucle de séquence d'affichage
    {
     for (int p=0;p<nbrLed;p++) // boucle pour chaque pin
     {
       boolean etat=affichage3[i][p]; // on va chercher l'état pour le pin
        digitalWrite(pinLed[p],etat); // on met le pin concerné à l'état
     }
      //tous les pins sont dans l'état de la séquence en cours
      delay(pause); //petite pause d'affichage
      // on passe à la séquence suivante
    }
  }
}
