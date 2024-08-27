#include <iostream>
#include "Vehicle.h"

using namespace std;

#ifndef PARKINGLOT_H
#define PARKINGLOT_H

class ParkingLot
{
    private:
        Vehicle** vehicles;
        int num_vehicles;

    public:
        ParkingLot();
        ParkingLot(int num_vehicles);
        int getCount();
        void parkVehicle(Vehicle* parkingVehicle);
        void unparkVehicle(int ID);

};


#endif