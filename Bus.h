#ifndef BUS_H
#define BUS_H
#include <iostream>
#include "Vehicle.h"

using namespace std;



class Bus: public Vehicle
{
    private:

    public:
        Bus(int ID);
        Bus(int ID);
        int getParkingDuration();

};


#endif