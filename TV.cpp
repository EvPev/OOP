#include <iostream>
#include "Appliance.h"
#include "TV.h"

using namespace std;

TV::TV() : TV(0,0) {}
TV::TV(int powerRating, double screenSize){this-> powerRating = powerRating, this-> screenSize = screenSize, isOn = false;}

void TV::setScreenSize(double screenSize){this->screenSize = screenSize;}
double TV::getScreenSize(){return screenSize;}

double TV::getPowerConsumption(){return (powerRating * (screenSize/10));}

TV:: ~TV(){}