#include <iostream>

using namespace std;

#ifndef CAR_H
#define CAR_H

class Car: public Vehicle
{
    private:

    public:
        using Vehicle::Vehicle;
        int getParkingDuration();
        


};


#endif