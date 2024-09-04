#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

using namespace std;

class AirFleet
{
    protected:
        AirCraft **fleet;
 

    public:
        AirFleet();
        AirCraft **get_fleet();
};

#endif