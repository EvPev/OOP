#include <iostream>
#include "Grade.h"

using namespace std;

Grade::Grade(string assignment, int value) 
{this->assignment = assignment; this->value = value;}
Grade::Grade() : Grade("null",0) {}
Grade::~Grade() {}

void Grade::set_assignment(string assignment) {this->assignment = assignment;}
void Grade::set_value(int value) {this->value = value;}

string Grade::get_assignment() {return assignment;}
int Grade::get_value() {return value;}
