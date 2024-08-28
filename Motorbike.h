#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>

using namespace std;

class Motorbike: public Vehicle
{
    private:

    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();

};
#endif
