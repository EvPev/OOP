#include <iostream>

using namespace std;

#ifndef CAR_H
#define CAR_H

class Car: public Vehicle
{
    private:

    public:
        Car();
        Car(int ID);
        int getParkingDuration();
        


};


#endif