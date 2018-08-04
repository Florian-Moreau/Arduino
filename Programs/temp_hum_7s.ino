/*
 * Créateur : Florian MOREAU
 * Date : 04/08/2018
 * Programme : Affiche la température (°C) et l'humidité (%)
 * Utilisation d'une plaque d'essaie contenant : Capteur de température et humidité DHT11, afficheur 7 segment TM1637.
 * Bibliothéque : TM1637, Adafruit_Sensor, DHT
 */

//Bibliothéque utilisé
#include <TM1637Display.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

//Variable et définition
#define DHTTYPE           DHT11     // DHT 11 
#define DHTPIN            12

DHT_Unified dht(DHTPIN, DHTTYPE);

const int CLK = 10; //Désigne la pin CLK
const int DIO = 11; //Désigne la pin DIO

int pause = 7000;

TM1637Display display(CLK, DIO);  //Détermine les ports pour l'afficheur 7 segments.

const uint8_t SEG_TEMP[] = {
  SEG_E | SEG_G | SEG_F, //premier chiffre
  SEG_A | SEG_G | SEG_D | SEG_E | SEG_F, //second chiffre
  SEG_E | SEG_F | SEG_A | SEG_B | SEG_C,// troisième chiffre
  SEG_A | SEG_B | SEG_F | SEG_G | SEG_E //quatrième chiffre
}; //Tableau pour générer se que l'on veut afficher manuellement

const uint8_t SEG_HUMI[] = {
  SEG_G,
  SEG_E | SEG_F | SEG_G | SEG_B | SEG_C,
  SEG_F | SEG_E | SEG_D | SEG_C | SEG_B,
  SEG_G
};

//Boucle Setup
void setup()
{
  display.setBrightness(0x0a);  //Régle la luminosité au max
  dht.begin(); //Lance le capteur DHT11
  
 Serial.begin(9600); //initialisation de l'affichage
 Serial.println("Start");
}


void loop()
{
// Quand la température est capter (evenement de temperature)
  sensors_event_t event;  
  dht.temperature().getEvent(&event);
  if (isnan(event.temperature)) {
    Serial.println("Error reading temperature!"); //Si une erreur à lieu sur le capteur, afficher dans la console un message d'erreur
  }
  else {
    Serial.print("Temperature: ");
    Serial.print(event.temperature); //affiche la température dans la console
    Serial.println(" *C");
    delay(pause);
    display.setSegments(SEG_TEMP); //affiche une forme manuelle sur l'afficheur 7 segments
    delay(pause);
    display.showNumberDec(event.temperature); //affiche la température sur l'afficheur 7 segments
    delay(pause);
  }

delay(pause);
  
  // Quand l'humidité est capté (evenement d'humidite)
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println("Error reading humidity!");
  }
  else {
    Serial.print("Humidity: ");
    Serial.print(event.relative_humidity); //affiche l'humidité dans la console
    Serial.println("%");
    delay(pause);
    display.setSegments(SEG_HUMI); //affiche une forme manuelle sur l'afficheur 7 segments
    delay(pause);
    display.showNumberDec(event.relative_humidity); //affiche la température sur l'afficheur 7 segments
    delay(pause);
  }
delay(pause);
}
