#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

using namespace std;

int main()
{
    ApartmentBuilding a;
    Unit unit1(10,10,10);
    Unit unit2(200,200,200);

    cout << "Current Units: " << a.get_Current_Number_of_Units() << endl;

    a.add_Unit(unit1);
    a.add_Unit(unit2);

    cout << "Current Units: " << a.get_Current_Number_of_Units() << endl;

    Unit * a_units = a.get_Contents();

    for (int i = 0; i < 10; i++)
    {
        cout << a_units[i].get_Area() << endl;
    }
}