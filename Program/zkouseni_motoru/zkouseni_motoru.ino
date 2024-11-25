// Definice pinů
const int irSensorPin = 2;   // Pin, na kterém je IR senzor
const int ledPin = 6;       // Pin pro LED diodu (můžeš změnit podle svého zapojení)

void setup() {
  // Nastavení pinů
  pinMode(irSensorPin, INPUT);   // IR senzor jako vstup
  pinMode(ledPin, OUTPUT);       // LED dioda jako výstup
}

void loop() {
  // Čtení hodnoty ze senzoru
  int sensorState = digitalRead(irSensorPin);

  // Kontrola stavu senzoru
  if (sensorState == LOW) {    // Pokud je paprsek přerušen (stav LOW)
    digitalWrite(ledPin, LOW); // Zapni LED
  } else {                     // Pokud paprsek není přerušen (stav HIGH)
    digitalWrite(ledPin, HIGH);  // Vypni LED
  }
}