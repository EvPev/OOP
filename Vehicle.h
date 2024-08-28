#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

using namespace std;



class Vehicle
{
    protected:
        time_t timeOfEntry;
        int ID;
        bool real;
        

    public:
    // Constructors
        Vehicle();
        Vehicle(int ID);

        time_t get_TOE();
        int get_ID();
        int  virtual getParkingDuration();
        bool get_real();
};

#endif