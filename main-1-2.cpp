#include <iostream>
#include "ApartmentBuilding.h"
#include "Unit.h"

using namespace std;

int main()
{
    int units_n = 2;
    ApartmentBuilding a(units_n);
    Unit unit1(0,0,0);
    Unit unit2(-1000000,-3,-20);

    cout << "Capacity: " << a.get_Capacity() << endl;

    cout << "Current Units: " << a.get_Current_Number_of_Units() << endl;

    a.add_Unit(unit1);
    a.add_Unit(unit2);

    cout << "Current Units: " << a.get_Current_Number_of_Units() << endl;

    Unit * a_units = a.get_Contents();

    for (int i = 0; i < units_n; i++)
    {
        cout << "area: " << a_units[i].get_Area() << " Bedrooms: " << a_units[i].get_Num_Bedrooms() << " Value: " << a_units[i].get_Value() << endl;
    }
}