#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <iostream>

using namespace std;

class Appliance 
{
    protected: 
        int powerRating;
        bool isOn;

    public:
        Appliance(int powerRating);
        Appliance();

        int get_powerRating();
        void set_powerRating(int powerRating);

        bool get_isOn();
        void turnOn();
        void turnOff();

        virtual double getPowerConsumption() = 0;

        virtual ~Appliance();
};
#endif