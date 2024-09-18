# CzechArduino a.k.a. CA library
Created specially for SPS, SOS, SOU Hradebni in Hradec Kralove. Use Czech language for programming Arduino! Contact me with some bug or what i need to add.

Download CzechArduino files. Insert it in C:\Documents\Arduino\libraries here make folder named: "CzechArduino". In your code for Arduino define it with: #include "CzechArduino.h". The code pointer is located in lib.ino in the main branch.

> [!IMPORTANT]
> This library is under maintence.

## Getting started
Now we will make some easy code for you.

```
//for first, we will define CA library

#include "CzechArduino.h"

void zacni() {
  //set Serial speed 115200 baud
  komunikace(115200);
}

void opakuj() {
  //easy loop method
  vypis("Ahoj z CzechArduino!");
  //give it some time, or your Arduino/ESP will be bricked 💀
  pockej(10000); //you need to type time in ms
}
```

> [!TIP]
> If you point to a method and use ctrl and click it will show you what values the method requires.

> [!NOTE]
> In „komunikace“ you can use any value which Arduino IDE supports.

> [!WARNING]
> Dont forgot to use delay which is „pockej“ or your Arduino will be bricked!

Nice! This is probably first code, which you make with CA library.
