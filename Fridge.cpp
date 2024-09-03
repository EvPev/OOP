#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

Fridge::Fridge(int powerRating, double volume) :Appliance(powerRating) {this->volume = volume;}
Fridge::Fridge():Fridge(0,0){}

void Fridge::setVolume(){this->volume = volume;}
double Fridge::getVolume(){return volume;}

double Fridge::getPowerConsumption(){return (powerRating * 24 * (volume / 1000));}

Fridge:: ~Fridge(){}