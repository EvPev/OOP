#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

using namespace std;

int main()
{
    Airplane a(5000, 100);
    a.set_fuel(95);
    a.fly(65,120);
    

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;
}

