#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;


class Car: public Vehicle
{
    private:

    public:
        Car();
        Car(int ID);
        int getParkingDuration();
        


};


#endif