/*
 * ******************************** *
 * Programme jeu de led             *
 * Auteur Florian MOREAU            *
 * 24/05/2018                       *
 * Led clignotante dans chaque port *
 * ******************************** *
 */


  // Déclaration des variable
  int connexion; // Constante de la connexion numéro 13
  int pause=100; // temps de pause en ms
  int compteur=0; // Compte le nombre de coup effectué

void setup () // Boucle d'initialisation
{
  //initialisation de la communication
  //Serial.begin(9600); //affichage du texte
  for(int connexion = 0 ; connexion < 13 ; connexion++)
  {
  pinMode(connexion,OUTPUT); // Connexion 13 en mode envoi de courant
  }
}

void loop () // Boucle infinie
{
  //int compteur=0;
  for(int connexion = 0 ; connexion < 13 ; connexion++)
  {
    delay(pause);
    digitalWrite(connexion,HIGH); // Envoi de courant dans une connexion
    //Serial.println("On");
    delay(pause); // Attente
    //compteur++;
    //Serial.println(compteur);
  }
  for(int connexion = 0 ; connexion < 13 ; connexion++)
  {
    delay(pause);
    digitalWrite(connexion,LOW); // Arrêt du courant dans une connexion
    //Serial.println("Off");
    delay(pause); // Attente
    //compteur--;
    //Serial.println(compteur);
  }
}
