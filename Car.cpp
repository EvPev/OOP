#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(int ID)
{
    this->ID = ID;
    this->timeOfEntry = time(0);
}
int Car::getParkingDuration() 
{
    int park_time = time(0) - timeOfEntry;
    park_time = park_time * 0.9;
    return park_time;
}