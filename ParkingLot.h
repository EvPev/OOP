#pragma oncce
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
        int getCount();
        void parkVehicle(Vehicle* parkingVehicle);
        void unparkVehicle(int ID);
        int countOverStayingVehicles(int maxParkingDuration);

};