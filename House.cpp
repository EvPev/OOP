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
    appliances = new Appliance* [numAppliances];
    currentNumAppliances = 0;
};

House:: ~House(){
    for (int i = 0; i < currentNumAppliances; i++) {
        delete appliances[i];
    }
    delete[] appliances;
}

Appliance* House::getAppliance(int position){return appliances[position];}

bool House::addAppliance(Appliance* appliance)
{
    if(currentNumAppliances >= numAppliances) {return false;}
    appliances[currentNumAppliances] = appliance;
    currentNumAppliances++;
    return true;
}
double House::getTotalPowerConsumption()
{
    double totalPowerConsumption = 0;
    for (int i = 0; i < currentNumAppliances; i++) {
    totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}