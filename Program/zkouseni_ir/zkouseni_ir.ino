// Definuj piny pro řízení směru motoru
int in1Pin = 8;  // První vstupní pin H-můstku
int in2Pin = 9;  // Druhý vstupní pin H-můstku

void setup() {
  // Nastav piny jako výstupní
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
}

void loop() {
  // Otočení motoru na jednu stranu
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
  delay(5000);  // Počkej 2 sekundy

  // Otočení motoru na druhou stranu
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, HIGH);
  delay(5000);  // Počkej 2 sekundy
}