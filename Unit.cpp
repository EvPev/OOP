#include <iostream>
#include "Unit.h"

using namespace std;

Unit::Unit(int m_Value, int num_Bedrooms, double area)
{
    this-> m_Value = m_Value;
    this-> num_Bedrooms = num_Bedrooms;
    this-> area = area;
}     
Unit::Unit() : Unit(0,0,0) {}

int Unit::get_Num_Bedrooms() {return num_Bedrooms;}// returns the number of bedrooms for the unit
int Unit::get_Value() {return m_Value;} // returns the value in dollars of the Unit
double Unit::get_Area() {return area;}

void Unit::set_Num_Bedrooms(int num_Bedrooms) {if (num_Bedrooms > 0) {this->num_Bedrooms = num_Bedrooms;}}
    
void Unit::set_Value(int m_Value) {if (m_Value > 0) {this->m_Value = m_Value;}}
void Unit::set_Area(double area) {if (area > 0) {this->area = area;}}