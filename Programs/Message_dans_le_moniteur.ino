/*
 * ******************************** *
 * Programme type Hello World       *
 * Auteur Florian MOREAU            *
 * 23/05/2018                       *
 * Message dans le Serial Monitor   *
 * ******************************** *
 */

//Programme hello world
void setup()
{
    //initialisation de la communication
    Serial.begin(9600);
    //affichage du texte
    Serial.println("Hello");
    Serial.println("Arduino");
    Serial.println("World !");
}
void loop()
{
    Serial.println("Je boucle !");
    delay(500);
    Serial.println("Youpi !");
    delay(500);
}
