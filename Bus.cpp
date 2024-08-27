#include <iostream>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;
int Bus::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.75;
    return park_time;
}