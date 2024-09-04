#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include "Appliance.h"

using namespace std;

class House
{
    protected:
        int numAppliances;
        Appliance** appliances;
        int currentNumAppliances;
    public:
        House();
        House(int numAppliances);

        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption();

        ~House();

        Appliance* getAppliance(int position);
};

#endif