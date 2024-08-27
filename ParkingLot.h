#include <iostream>
#include "Vehicle.h"

using namespace std;

#ifndef PARKINGLOT_H
#define PARKINGLOT_H

class ParkingLot
{
    private:
        Vehicle** vehicles;
        int capacity;

    public:
        ParkingLot();
        ParkingLot(int capacity);
        int getCount();
        void parkVehicle(Vehicle* parkingVehicle);
        void unparkVehicle(int ID);

};


#endif