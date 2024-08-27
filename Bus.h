#include <iostream>
#include "Vehicle.h"

using namespace std;

#ifndef BUS_H
#define BUS_H

class Bus: public Vehicle
{
    private:

    public:
        Bus();
        Bus(int ID);
        int getParkingDuration();

};


#endif