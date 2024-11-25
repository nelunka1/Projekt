#include <Servo.h>

Servo myServo;   // Vytvoření objektu pro servomotor
int totalAngle = 0;  // Proměnná pro sledování celkového otočeného úhlu

void setup() {
  myServo.attach(9);  // Připojení serva na pin 9 (můžeš změnit podle zapojení)
}

void loop() {
  if (totalAngle < 360) {  // Kontrola, zda ještě nedosáhl 360°
    myServo.write(0);      // Roztočení serva jedním směrem
    delay(250);            // Přibližné otočení o 45 stupňů
    myServo.write(90);     // Zastavení serva
    delay(750);           // Čekání po dobu 2 sekund

    totalAngle += 45;      // Přičtení 45 stupňů k celkovému úhlu
  } else {
    myServo.write(90);     // Servo zůstane zastavené po dosažení 360°
    while (true);          // Ukončení programu, když je dosaženo 360°
  }
}