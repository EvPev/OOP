#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

using namespace std;

int main()
{
    Helicopter a(5690, "star");
    a.set_fuel(80);
    a.fly(45,10);

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;
}

