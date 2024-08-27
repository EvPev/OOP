#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;
int Car::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.9;
    return park_time;
}