/*
 * Copyright (C) 2024 Jiri Javurek
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//VERSION 1.3.1

#include "CzechArduino.h"

#define MAX_NUMBERS 100

long cisla[MAX_NUMBERS];
int aktualniPocet = 0; 

void vypis(String text) {
  Serial.println(text);
}

void pockej(int cas) {
  delay(cas);
}
void komunikace(unsigned long rychlost) {
  Serial.begin(rychlost);
}

uint8_t rezimPinu(int pin, uint8_t typ) {
  pinMode(pin, typ);
  return typ;
}

uint8_t ctiPin(int pin) {
  return digitalRead(pin);
}

char cti() {
  while (!Serial.available())
  {
    Serial.println("Cteni serialu neni mozne.");
    return false;
  }
  return Serial.read();
}

long nahodneCislo(long stopCislo, int pocet) {
  return nahodneCislo(0, stopCislo, pocet);
}

long nahodneCislo(long startCislo, long stopCislo, int pocet) {
  
  long cisla[MAX_NUMBERS];
  int aktualniPocet = 0;

  for (int i = 0; i < pocet; i++) {
    if (aktualniPocet < MAX_NUMBERS) {
      long cislo = random(startCislo, stopCislo);
      cisla[aktualniPocet] = cislo;
      aktualniPocet++;
    } else {
      Serial.println("Pole čísel bylo naplněno.");
      break;
    }
  }

  if (aktualniPocet > 0) {
    int nahodnyIndex = random(0, aktualniPocet);
    return cisla[nahodnyIndex];
  }

  return -1;
}
