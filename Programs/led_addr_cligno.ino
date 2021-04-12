/* Led adressable permet de reproduire le drapeau francais sur un module à led Neopixel.
 *  La sortie est la broche numérique N°3 */

#include <Adafruit_NeoPixel.h> // appel de la bibliothèque 

#define sortie 3 // affectation des broches
#define nb_led 8 // le module comporte 8 led

Adafruit_NeoPixel module = Adafruit_NeoPixel(nb_led, sortie, NEO_GRB + NEO_KHZ800);  // création de l'objet module

void setup() 
{
  module.begin(); // initialisation de module
}

void loop() 
{
  for(int i=0;i<3;i++) // 3 premières led en bleu
  {
    module.setPixelColor(i,0,0,150); 
    module.show(); 
  }
  for(int i=3;i<5;i++) // 2 led suivantes en blanc
  {
    module.setPixelColor(i,150,150,150); 
    module.show();
  }
  for(int i=5;i<9;i++) // 3 dernières led en rouge
  {
    module.setPixelColor(i,150,0,0); 
    module.show(); 
  }
}

/* Source : https://pecquery.wixsite.com/arduino-passion/la-led-adressable*/
