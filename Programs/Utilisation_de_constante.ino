// on définit la constante en donnant un nom et un nombre.
const int CONNEXION=13;

void setup()
{
    // on l'utilise en écrivant juste son nom
    pinMode(CONNEXION,OUTPUT);
}
void loop()
{
    // là encore.
    digitalWrite(CONNEXION,HIGH);
    delay(1000);
    // et là encore.
    digitalWrite(CONNEXION,LOW);
    delay(1000);
}
