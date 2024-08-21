#include <iostream>
#include "Unit.h"

using namespace std;

#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H

class ApartmentBuilding
{
    private:
        int m_Capacity;
        Unit* units;

    public:
        ApartmentBuilding();
        ApartmentBuilding(int m_Capacity);  

        int get_Current_Number_of_Units(); 
        int get_Capacity(); 
        Unit * get_Contents();
        bool add_Unit(Unit unit);
        ~ApartmentBuilding();
};


#endif