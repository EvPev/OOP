#include <iostream>

using namespace std;

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike: public Vehicle
{
    private:

    public:
        Motorbike(int ID);
        int getParkingDuration();

};


#endif