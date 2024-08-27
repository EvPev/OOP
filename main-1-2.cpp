#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() 
{
    int capacity = 3;
    ParkingLot p_lot(capacity);
    string v_type;
    int ID;
    for (int i = 0; i < capacity; i++)
    {
        cout << "Vehicle type: ";
        cin >> v_type;
        cout << "Vehicle ID: ";
        cin >> ID;
        
        Vehicle* tempPark;

        if (v_type == "car") {tempPark = new Car(ID);}
        if (v_type == "bus") {tempPark = new Bus(ID);}
        if (v_type == "motorbike") {tempPark = new Motorbike(ID);}
        p_lot.parkVehicle(tempPark);
    }

    
    cout << "\n[park]\n";
    Vehicle* carr = new Car(10);
    p_lot.parkVehicle(carr);

    

    cout << "\n[Unpark]\n Vehicle ID: ";
    cin >> ID;
    p_lot.unparkVehicle(ID);

    cout << "\n[park]\n";
    p_lot.parkVehicle(carr);


    
}
