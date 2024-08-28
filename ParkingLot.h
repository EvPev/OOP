
#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <iostream>
#include "Vehicle.h"

using namespace std;


class ParkingLot
{
    private:
        Vehicle** vehicles;
        int capacity;

    public:
        ParkingLot();
        ParkingLot(int capacity);
        ~ParkingLot();
        int getCount();
        void parkVehicle(Vehicle* parkingVehicle);
        void unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);


};


#endif