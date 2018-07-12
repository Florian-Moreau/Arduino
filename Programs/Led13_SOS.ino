/*
 * ******************************** *
 * Programe SOS led 13              *
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

  // Première vague
  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(500); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(500); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(1000); // Attente

  // Seconde vague
  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(1000); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(1000); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(1000); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(1000); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(1000); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(1000); // Attente

  // Troisème vague
  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(500); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(500); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  delay(500); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  delay(5000); // Attente
}
