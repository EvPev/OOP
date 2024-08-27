#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() 
{
    int cars = 0;
    int busses = 0;
    int motorbikes = 0;
    int num_vehicles = 0;

    cout << "[Enter Number of Vehicles]\nCars: ";
    cin >> cars;    
    cout << "Busses: ";
    cin >> busses;
    cout << "Motorbikes: ";
    cin >> motorbikes;

    num_vehicles = cars + busses + motorbikes;

    Vehicle* a_vehicles[num_vehicles];
    {
        for (int i = 0; i < cars; i++) {a_vehicles[i] = new Car();}

        for (int i = cars; i < (cars + busses); i++) {a_vehicles[i] = new Bus();}

        for (int i = (cars + busses); i < (num_vehicles); i++) {a_vehicles[i] = new Motorbike();}
    }
    
    for (int i = 0; i < num_vehicles; i++)
    {
        cout << a_vehicles[i]->getParkingDuration() << "ID: " << a_vehicles[i]->get_ID() << endl;
    }

    Bus b(10);

    Vehicle v(10);

    cout << "\nBus:" << b.getParkingDuration() << "ID: " << b.get_ID() << endl;
    cout << "\nBus:" << b.getParkingDuration() << endl;
}