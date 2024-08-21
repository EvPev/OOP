#include <iostream>
#include "Unit.h"

using namespace std;

int main()
{
    Unit a;

    cout << "value: " << a.get_Value() << endl;
    cout << "Size: " << a.get_Area() << endl;
    cout << "Bedrooms: " << a.get_Num_Bedrooms() << endl;

    a.set_Num_Bedrooms(10);
    a.set_Value(50000);
    a.set_Area(200);

    cout << "value: " << a.get_Value() << endl;
    cout << "Size: " << a.get_Area() << endl;
    cout << "Bedrooms: " << a.get_Num_Bedrooms() << endl;
}