#include <iostream>
#include "ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot() : ParkingLot(10) {}
ParkingLot::ParkingLot(int capacity) 
{
    this->capacity = capacity;
    vehicles = new Vehicle*[capacity];
    for (int i = 0; i < capacity; i++)
    {
        vehicles[i] = new Vehicle();
    }
    
}

ParkingLot::~ParkingLot() 
{
    for (int i = 0; i < capacity; i++)
    {
        delete vehicles[i];
    }
     delete[] vehicles;
}


int ParkingLot::getCount() 
{
    int count = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (vehicles[i]->get_real() == 1) {count++;}
    }
    return count;
}

void ParkingLot::parkVehicle(Vehicle* parkingVehicle) 
{
    bool spaceFound = false;
        for (int i = 0; i < capacity; i++)
    {
        if (vehicles[i]->get_real() == 0) 
        {
            spaceFound = 1;
            delete vehicles[i];
            vehicles[i] = parkingVehicle;
            break;
        }
    }
    if (spaceFound == 0) {cout << "The lot is full" << endl;}
}

void ParkingLot::unparkVehicle(int ID) 
{
    bool unparkedTrue = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (vehicles[i]->get_real() == 1 && vehicles[i]->get_ID() == ID)
        {
            delete vehicles[i];
            vehicles[i] = new Vehicle();
            unparkedTrue = 1;
        }
    }
    if (unparkedTrue == 0) {cout << "Vehicle not in the lot" << endl;}
}

int ParkingLot:: countOverStayingVehicles(int maxParkingDuration)
{
    int count = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (vehicles[i]->getParkingDuration() >= maxParkingDuration)
        {
            count++;
        }
    }
    return count;
}