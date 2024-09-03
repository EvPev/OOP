#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

using namespace std;

int main()
{
    Fridge a(10, 1000);

    cout << "Status: ";
    if(a.get_isOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    a.turnOn();

    a.setVolume(10);

    cout << "Status: ";
    if(a.get_isOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    cout << "Volume: " << a.getVolume() << endl;
    cout << "Power rating: " << a.get_powerRating() << endl;
    cout << "Power consumption: " << a.getPowerConsumption() << endl;
}