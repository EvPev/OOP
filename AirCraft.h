#ifndef AirCraft_H
#define AirCraft_H
#include <iostream>

using namespace std;

class AirCraft
{
    protected:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;         // initially 0
    public:
        AirCraft();
        AirCraft(int w);

        void refuel();                          // Resets fuel back to 100%
        void virtual fly(int headwind, int minutes);    // headwind in km/h and minutes (time flying)

        int get_weight();
        float get_fuel();
        int get_numberOfFlights();

        void set_weight(int w);
        void set_fuel(float fuel);
        void set_numberOfFlights(int numberOfFlights);
};

#endif