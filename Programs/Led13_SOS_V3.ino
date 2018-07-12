/*
 * ******************************** *
 * Programme SOS led 13 V3           *
 * Auteur Florian MOREAU            *
 * 23/05/2018                       *
 * Led 13 qui lance un SOS en morse *
 * ******************************** *
 */


  // Déclaration des variable
  const int connexion13=13; // Constante de la connexion numéro 13
  int tempsDePause=500;

void setup () // Boucle d'initialisation
{
  //initialisation de la communication
  Serial.begin(9600); //affichage du texte
  pinMode(connexion13,OUTPUT); // Connexion 13 en mode envoi de courant
}

void loop () // Boucle infinie
{

  // Première type de vague
  while (tempsDePause == 500)
    {
      delay(tempsDePause);
      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      Serial.println("On");
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      Serial.println("Off");
      delay(tempsDePause); // Attente

      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      Serial.println("On");
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      Serial.println("Off");
      delay(tempsDePause); // Attente

      digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
      Serial.println("On");
      delay(tempsDePause); // Attente
      digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
      Serial.println("Off");
      delay(tempsDePause); // Attente
      tempsDePause=1000;
    }
  

  // Second type de vague
  delay(tempsDePause);
  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  Serial.println("On");
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  Serial.println("Off");
  delay(tempsDePause); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  Serial.println("On");
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  Serial.println("Off");
  delay(tempsDePause); // Attente

  digitalWrite(connexion13,HIGH); // Envoi de courant dans la connexion 13
  Serial.println("On");
  delay(tempsDePause); // Attente
  digitalWrite(connexion13,LOW); // Arrêt du courant dans la connexion 13
  Serial.println("Off");
  delay(tempsDePause); // Attente
  tempsDePause=500;
}
