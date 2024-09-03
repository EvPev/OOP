#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

House::House():House(0){}
House::House(int numAppliances) 
{
    this->numAppliances = numAppliances;
    appliances = new Appliance* [numAppliances]{};
};

House:: ~House(){
    for (int i = 0; i < numAppliances; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

Appliance* House::getAppliance(int position){return appliances[position];}

bool House::addAppliance(Appliance* appliance)
{
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i]->getIsOn() == 0) {appliances[i] = appliance;}
        return true;
    }
    return false;
}
double House::getTotalPowerConsumption()
{
    double totalPowerConsumption = 0;
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i]->getIsOn() == 0) {
            totalPowerConsumption += appliances[i]->getPowerConsumption();
        }
    }
    return totalPowerConsumption;
}