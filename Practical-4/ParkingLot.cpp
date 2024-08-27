#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot() : ParkingLot(10) {}
ParkingLot::ParkingLot(int num_vehicles) 
{
    this->num_vehicles = num_vehicles;
    vehicles = new Vehicle*[num_vehicles];
}



int ParkingLot::getCount() {}
void ParkingLot::parkVehicle(Vehicle* parkingVehicle) {}
void ParkingLot::unparkVehicle(int ID) {}