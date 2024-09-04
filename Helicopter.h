#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include "AirCraft.h"

using namespace std;

class Helicopter: public AirCraft
{
    protected:
        string name;
    public:
        Helicopter(int w, string n);
        Helicopter();

        string get_name();
        void set_name(string name);


        void fly(int headwind, int minutes);
};

#endif