#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main()
{
    TV a(10, 1000);

    cout << "Status: ";
    if(a.getIsOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    a.turnOn();

    cout << "Status: ";
    if(a.getIsOn() == 1)
    {cout << "On" << endl;
    }else {cout << "Off" << endl;}

    cout << "Screen Size: " << a.getScreenSize() << endl;
    cout << "Power rating: " << a.getPowerRating() << endl;
    cout << "Power consumption: " << a.getPowerConsumption() << endl;
}
