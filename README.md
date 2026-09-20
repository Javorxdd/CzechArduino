# CzechArduino a.k.a. CA library
Created specially for small kids, who wants to start with programing Arduino. Use Czech language for programming Arduino! Contact me with some bug or what i need to add.

Download CzechArduino files. Insert it in C:\Documents\Arduino\libraries here we need to extract .zip file. In your code for Arduino you need to define it with: ```#include <CzechArduino.h>```. Or you can use automatic in Sketch > Include Library > Add .ZIP Library…. Be sure, that you’re including the right ZIP! The code pointer is located in lib.ino in the main branch.

> [!IMPORTANT]
> This library is under maintence.

> [!IMPORTANT]
> If you want to help with code always type your version, which you can found in CzechArduino.h.

## Getting started
Now we will make some easy code for you.

> [!IMPORTANT]
> Big thanks to mister Krtkus, who gives me ideas what to add!

```
//for first, we will define CA library

#include <CzechArduino.h>

cislo vstupniPin = 10;
cislo vystupniAnalogPin = A1;

void zacni() {
  //set Serial speed 115200 baud
  komunikace(115200);
  rezimPinu(vstupniPin, vstup);
  rezimPinu(vystupniAnalogPin, vystup);
}

void opakuj() {

  cislo stav = ctiPin(vstupniPin);
  //easy loop method
  vypis("Ahoj z CzechArduino!");
  pokud (stav == vysokyStav) {
    vypis("Vstup na pinu 10 je vysoky!");
  } nebo_pokud (stav == nizkyStav) {
    zapisAnalog(vystupniAnalogPin, 125);
  }
  pockej(10000); //you need to type time in ms
}
```

> [!TIP]
> If you point to a method and use ctrl and click, it will show you what values the method requires.

> [!NOTE]
> In „komunikace“ you can use any value which Arduino IDE supports.

> [!WARNING]
> Dont forgot to use delay which is „pockej“ or your Arduino will be bricked!

Nice! This is probably first code, which you made with CA library.
