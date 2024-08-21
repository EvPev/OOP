#include <iostream>
#include "Unit.h"
#include "ApartmentBuilding.h"

using namespace std;

    ApartmentBuilding::ApartmentBuilding() : ApartmentBuilding(10) {}

    ApartmentBuilding::ApartmentBuilding(int m_Capacity) 
    {
        this->m_Capacity = m_Capacity;
        units = new Unit[m_Capacity];
    }  

    int ApartmentBuilding::get_Current_Number_of_Units() 
    {
        int current_Units = 0;
        for (int i = 0; i < m_Capacity; i++)
        {
            if (units[i].get_Area() != 0) 
            {
                current_Units++;
            }
        }
        return current_Units;
    } 

    Unit* ApartmentBuilding::get_Contents() {return units;}

    bool ApartmentBuilding::add_Unit(Unit unit) 
    {
        for (int i = 0; i < m_Capacity; i++)
        {
            if (units[i].get_Area() == 0)
            {
                units[i].set_Area(unit.get_Area());
                units[i].set_Value(unit.get_Value());
                units[i].set_Num_Bedrooms(unit.get_Num_Bedrooms());
                return true;
            }
        }
        return false;
    }

    ApartmentBuilding::~ApartmentBuilding() {delete[] units;}
