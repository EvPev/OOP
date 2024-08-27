#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int ID)
{
    this->ID = ID;
    this->timeOfEntry = time(0);
}
Vehicle::Vehicle():Vehicle(0) {}

time_t Vehicle:: get_TOE() {return timeOfEntry;}
int Vehicle:: get_ID() {return ID;}
int Vehicle:: getParkingDuration() {return (time(0) - timeOfEntry);}