//Definujeme knihovny, CzechArduino povinna
#include "CzechArduino.h"
//Knihovna pro DHT teplomer
#include <DHT.h>

//Inicializujeme class z knihovny DHT a nastavime si promennou Teplomer, kterou dale budeme pouzivat, nastavime pin a typ teplomeru
DHT Teplomer(2, DHT11);

//Metoda pro inicializaci kodu
void start() {
  //Zacneme s komunikaci s Serialem (9600baud rate)
  komunikace(9600);
  //"Inicializujeme" teplomer
  Teplomer.zacni();
}

//Metoda loop, ktera se nam stale opakuje
void opakuj() {
  vypis("Ahoj z CzechArduina!");
  //Inicializace promenne "teplota"
  cislo teplota = Teplomer.vypisTeplotu();
  //Vypiseme si teplotu v int, tedy v celem cislu (25,26,...), promennou teplota musime prevest na String, abychom to mohli vypsat po seriove lince
  vypis("Teplota v typu inteager: " + String(teplota));
  //Vypiseme si teplotu v float, tedy v desetinnem cislu (25,78;26,31;...), promennou teplota musime prevest na String, abychom to mohli vypsat po seriove lince
  desetinne teplota2 = Teplomer.vypisTeplotu();
  vypis("Teplota v typu float: " + String(teplota2));
  //NOVE - nahodne vybirani cisel s pameti (nevybere se stejne cislo hned za sebou), metoda umoznuje pouzit start cislo tzn.: 0-100 (v nasem pripade 100-300)
  long vyber1 = nahodneCislo(100, 300, 10);
  vypis("Vybrane cislo je: " + String(vyber1));
  //NOVE
  long vyber2 = nahodneCislo(300, 10);
  vypis("Vybrane cislo2 je: " + String(vyber2));
  //Pro lepsi cteni pridame zpozdeni, tzn. kazdych 5 vterin se provede kod nahore
  pockej(5000);

  pokud (teplota == 25) {
    vypis("Teplota je idealni!");
  } nebo_pokud (teplota >= 26) {
    vypis("Teplota neni idealni, zacina byt horko!");
  } nebo_pokud (teplota == nic) {
    vypis("Teplomer pravdepodobne nefunguje!");
  } jinak {
    vypis("Teplota je mensi, nez 25°C");
  }

}
