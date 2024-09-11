#include <iostream>
#include "University.h"

using namespace std;


Student::Student(string name, string location) {this->name = name; this->location = location;}
Student::Student() : Student("null","null") {}
Student::~Student() {}

void Student::set_Name(string name) {this->name = name}
void Student::set_Location(string location) {this->location = location;}
string Student::get_Name() {return name;}
string Student::get_Location() {return location;}

void Student::addCourse(string name, int id);