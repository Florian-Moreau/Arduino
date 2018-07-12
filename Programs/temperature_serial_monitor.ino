/*
 * ******************************** *
 * Programme temperature            *
 * Auteur Florian MOREAU            *
 * 25/05/2018                       *
 * Envoi temperature serial monitor *
 * ******************************** *
 */
float cel;
int sensor=0;
int pause=250;
void setup() {

  // Initialise la communication avec le PC
  Serial.begin(9600);
}

// Fonction loop(), appelée continuellement en boucle tant que la carte Arduino est alimentée
void loop() {
  
  // Mesure la tension sur la broche A0
  int valeur_brute = analogRead(sensor);
  
  // Transforme la mesure (nombre entier) en température via un produit en croix
  float cel = valeur_brute*5.0/1023.0;
  cel =((cel * 1000) - 500) / 10;
  // Envoi la mesure au PC pour affichage et attends 250ms
  Serial.println(cel);
  delay(pause);
