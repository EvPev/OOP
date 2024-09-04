#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;

int main()
{
    Helicopter a(5000, "star");
    a.fly(50,10);

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;
}

