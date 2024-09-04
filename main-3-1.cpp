#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

using namespace std;

int main()
{
    House house(2);

    Appliance* tv = new Fridge(10,10);
    Appliance* fridge = new Fridge(10,10);
    Appliance* fridge1 = new Fridge(10,10);

    bool added = false;

    added = house.addAppliance(tv);
    cout << "Appliance Added: ";
    if(added == 0) {cout << "False" << endl;}
    else {cout << "True" << endl;}

    added = house.addAppliance(fridge);
    cout << "Appliance Added: ";
    if(added == 1) {cout << "True" << endl;}
    else {cout << "False" << endl;}

    added = house.addAppliance(fridge1);
    cout << "Appliance Added: ";
    if(added == 1) {cout << "True" << endl;}
    else {cout << "False" << endl;}
    

    // cout << "Total Power Consumption: " << house.getTotalPowerConsumption() << endl;
}
