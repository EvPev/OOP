#ifndef Airplane_H
#define Airplane_H
#include <iostream>
#include "AirCraft.h"

using namespace std;

class Airplane: public AirCraft
{
    protected:
        int numPassengers;
    public:
        Airplane();                       
        Airplane(int w, int p);

        void reducePassengers(int x);     // reduce passenger list by x
        int get_numPassengers();
        void fly(int headwind, int minutes);     

};

#endif
