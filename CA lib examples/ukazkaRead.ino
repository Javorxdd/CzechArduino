#include "CzechArduino.h"

cislo vstupniPinCislo = 10;
cislo vystupniDigitalPin = 11;
cislo vystupniAnalogPin = A0;

void nastaveni() {
  rezimPinu(vstupniPinCislo, vstup);
  rezimPinu(vystupniDigitalPin, vystup);
  rezimPinu(vystupniAnalogPin, vystup);
}

void smycka() {
  // put your main code here, to run repeatedly:
  cislo stav = ctiPin(vstupniPinCislo);
  pokud (stav == vysokyStav) {
    vypis("AHOJ!");
  } nebo_pokud (stav == nizkyStav) {
    zapisAnalog(vystupniAnalogPin, 125);
    zapisDigital(vystupniDigitalPin, vysokyStav);
  }
}
