/*
 * ******************************** *
 * Programe SOS led 13 V2           *
 * Auteur Florian MOREAU            *
 * 22/05/2018                       *
 * Led 13 qui lance un SOS en morse *
 * ******************************** *
 */


  // Déclaration des variable
  const int connexion13=13; // Constante de la connexion numéro 13
  int tempsDePause=800;

void setup () // Boucle d'initialisation
{
  pinMode(connexion13,OUTPUT); // Connexion 13 en mode envoi de courant
}

void loop () // Boucle infinie
{

  // Première type de vague
  while (tempsDePause == 500)
    {
      delay(tempsDePause);
      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      delay(tempsDePause); // Attente

      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      delay(tempsDePause); // Attente

      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      delay(tempsDePause); // Attente
      tempsDePause=1000;
    }
  

  // Second type de vague
  delay(tempsDePause);
  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(tempsDePause); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(tempsDePause); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(tempsDePause); // Attente
  tempsDePause=500;
}
