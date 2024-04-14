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

#ifndef CzechArduino_h
#define CzechArduino_h
#define pokud if
#define jinak else
#define opakuj loop
#define start setup
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

#include "Arduino.h"

void vypis(String text);
void pockej(int cas);
void komunikace(int rychlost);
char cti();



#endif
