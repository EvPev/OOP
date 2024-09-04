#include <iostream>
#include "AirCraft.h"

using namespace std;

int main() {
    AirCraft a;

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;

    a.set_weight(4);
    a.set_fuel(2);
    a.set_numberOfFlights(5);

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;

    a.fly(10,10);
    a.refuel();

    cout << "weight: " << a.get_weight() << endl;
    cout << "Fuel: " << a.get_fuel() << endl;
    cout << "Num Flights: " << a.get_numberOfFlights() << endl;
}