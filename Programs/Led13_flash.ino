/*
*****************************************************************
  Programme Led 13 Flash
  Auteur Florian MOREAU
  22/05/2018
  Fait clignoter la led situer sur l'Arduino soit la led 13
*****************************************************************
*/

void setup() // Boucle d'initialisation
{
  pinMode(13, OUTPUT); // Connexion 13 en mode envoi de courant
}

void loop() // Boucle infinie
{
  digitalWrite(13, HIGH); // Envoi de courant dans la connexion 13
  delay(300); // Attente de 1000ms soit 1sec
  digitalWrite(13, LOW); // Arret du courant dans la connexion 13
  delay(300); // Attente de 1000ms soit 1sec
}
