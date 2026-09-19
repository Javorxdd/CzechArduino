/*
 * Copyright (C) 2024 Jiri "Javor" Javurek
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

#ifndef CZECH_ARDUINO_H
#define CZECH_ARDUINO_H

#include <Arduino.h>


#define pokud if
#define jinak else
#define smycka loop
#define nastaveni setup
#define ano true
#define ne false
#define nebo_pokud else if
#define nic NULL
#define vrat return
#define vypisTeplotu readTemperature
#define zacni begin

using cislo = int;
using desetinne = float;
using rozhodni = bool;
using pismeno = char;


const uint8_t vstup = INPUT;
const uint8_t vystup = OUTPUT;

void vypis(String text);
void pockej(int ms);
void komunikace(unsigned long rychlost);
char cti();
long nahodneCislo(long startCislo, long stopCislo, int pocet);
long nahodneCislo(long stopCislo, int pocet);
void rezimPinu(int pin, String typ);


#endif
