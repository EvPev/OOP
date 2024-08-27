#include <iostream>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;


Bus::Bus(int ID)
{
    this->ID = ID;
    this->timeOfEntry = time(0);
}


int Bus::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.75;
    return park_time;
}