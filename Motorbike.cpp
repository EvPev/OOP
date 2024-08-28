#include <iostream>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike() : Motorbike(0) {}

Motorbike::Motorbike(int ID) : Vehicle(ID)
{
    real = 1;
}

int Motorbike::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.85;
    return park_time;
}