#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

int main()
{
    Fridge a(10, 1000);

    cout << "Status: ";
    if(a.getIsOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    a.turnOn();

    cout << "Status: ";
    if(a.getIsOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    cout << "Volume: " << a.getVolume() << endl;
    cout << "Power rating: " << a.getPowerRating() << endl;
    cout << "Power consumption: " << a.getPowerConsumption() << endl;
}