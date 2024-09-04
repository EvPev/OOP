#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;

Helicopter::Helicopter(int w, string n): AirCraft(w) {name = n;}
Helicopter::Helicopter(): Helicopter(0,"null") {}

string Helicopter::get_name() {return name;}
void Helicopter::set_name(string name) {this->name = name;}


void Helicopter::fly(int headwind, int minutes){
    double tempFuel = fuel;
    if (headwind < 40) {tempFuel = tempFuel - (0.2 * minutes);}
    else if (headwind >= 40) {tempFuel = tempFuel - (0.4 * minutes);}

    if (weight > 5670) {tempFuel -= ((0.01 * (weight - 5670)) * minutes);}

    if (tempFuel >= 20) {fuel = tempFuel; numberOfFlights++;}
}