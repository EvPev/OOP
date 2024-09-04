#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

Fridge::Fridge(int powerRating, double volume) :Appliance(powerRating) {this->volume = volume;}
Fridge::Fridge():Appliance(0){}

void Fridge::setVolume(double volume){this->volume = volume;}
double Fridge::getVolume(){return volume;}

double Fridge::getPowerConsumption(){return (powerRating * 24 * (volume / 100));}

// Fridge:: ~Fridge(){}