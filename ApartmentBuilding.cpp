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
    int ApartmentBuilding::get_Capacity() {return m_Capacity;}

    bool ApartmentBuilding::add_Unit(Unit unit) 
    {
        for (int i = 0; i < m_Capacity; i++)
        {
            if (units[i].get_Area() == 0)
            {
                if (unit.get_Area() > 0) {units[i].set_Area(unit.get_Area());}
                if (unit.get_Value() > 0) {units[i].set_Value(unit.get_Value());}
                if (unit.get_Num_Bedrooms() > 0) {units[i].set_Num_Bedrooms(unit.get_Num_Bedrooms());}
                return true;
            }
        }
        return false;
    }

    ApartmentBuilding::~ApartmentBuilding() {delete[] units;}
