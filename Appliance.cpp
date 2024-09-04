#include <iostream>
#include "Appliance.h"

using namespace std;


Appliance::Appliance(int powerRating){this->powerRating = powerRating; isOn = false;}
Appliance::Appliance():Appliance(0){}

int Appliance::get_powerRating(){return powerRating;}
void Appliance::set_powerRating(int powerRating){this->powerRating = powerRating;}

bool Appliance::get_isOn()  {return isOn;}
void Appliance::turnOn()    {isOn = true;}
void Appliance::turnOff()   {isOn = false;}

double Appliance::getPowerConsumption() {return 0;}

// Appliance:: ~Appliance(){}

