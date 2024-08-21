#include <iostream>

using namespace std;

#ifndef UNIT_H
#define UNIT_H

class Unit
{
    private:
        int m_Value;
        int num_Bedrooms;
        double area;

    public:
        Unit(int m_Values, int num_Bedrooms, double area);
        Unit();

        int get_Num_Bedrooms();// returns the number of bedrooms for the unit
        int get_Value(); // returns the value in dollars of the Unit
        double get_Area();

        void set_Num_Bedrooms(int num_Bedrooms);
        void set_Value(int m_Value);
        void set_Area(double area);
};


#endif

















