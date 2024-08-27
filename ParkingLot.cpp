#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot() : ParkingLot(10) {}
ParkingLot::ParkingLot(int capacity) 
{
    this->capacity = capacity;
    vehicles = new Vehicle*[capacity];
}

int ParkingLot::getCount() 
{
    int count = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (vehicles[i]->get_real() == 1) {count++;}
    }
    
}

void ParkingLot::parkVehicle(Vehicle* parkingVehicle) {}
void ParkingLot::unparkVehicle(int ID) {}