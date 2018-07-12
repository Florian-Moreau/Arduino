/*
 * ********************************************** *
 * Programme Multiplication                       *
 * Auteur Florian MOREAU                          *
 * 23/05/2018                                     *
 * Table de multiplication dans le serial monitor *
 * ********************************************** *
 */

int numTable; // variable pour la table concernée

void setup() {
  numTable = 1; // iniialisation à 7
  Serial.begin(9600); //initialisation de l'affichage
  
  //Affichage de l'entête du programme
  Serial.println("***********************");
  Serial.println("Table de multiplication");
  Serial.println(); // saut de ligne pour aérer
}

void loop() 
{
    while (numTable <=10)
    {
     Serial.print("La table de : "); //pas de retour à la ligne
     Serial.println(numTable); // affichage de la variable
       // boucle de progression pour la multiplication
       for (int t = 0; t < 10; t++)
       {
       int resultat = numTable * t; // variable pour stocker le résultat
       
        // Affichage de la ligne
        Serial.print(t);
        Serial.print(" x ");
        Serial.print(numTable);
        Serial.print(" = ");
        Serial.println(resultat);
       }
     Serial.println(); // saut de ligne
     Serial.println("***********************");
     numTable++;
   }
 }
