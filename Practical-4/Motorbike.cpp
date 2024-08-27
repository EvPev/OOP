#include <iostream>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;
int Motorbike::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.85;
    return park_time;
}