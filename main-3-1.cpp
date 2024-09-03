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
    House house(10);

    TV tv(10,10);
    Fridge fridge(10,10);
    bool added = false;

    added = house.addAppliance(&tv);
    cout << "Appliance Added: " << added << endl;
    added = house.addAppliance(&fridge);
    cout << "Appliance Added: " << added << endl;
    

    cout << "Total Power Consumption: " << house.getTotalPowerConsumption() << endl;
}
