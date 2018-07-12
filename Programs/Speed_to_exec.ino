void setup() {
  Serial.begin(9600);
}
void loop() {
  unsigned long tempsFin; //variable pour noter le temps final
  unsigned long  tempsDepart=micros(); //variable du temps de départ initialisée au temps actuel
  //bloc à tester
  tempsFin=micros(); //on récupère à nouveau le temps actuel
  Serial.println(tempsFin-tempsDepart); // on affiche la différence en microsecondes
}
