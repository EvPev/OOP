#include <iostream>
#include "Appliance.h"
#include "TV.h"

using namespace std;

TV::TV() : Appliance(0) {}
TV::TV(int powerRating, double screenSize):Appliance(powerRating) {this-> screenSize = screenSize;}

void TV::setScreenSize(double screenSize){this->screenSize = screenSize;}
double TV::getScreenSize(){return screenSize;}

double TV::getPowerConsumption(){return (powerRating * (screenSize/10));}

// TV:: ~TV(){}