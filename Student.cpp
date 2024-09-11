#include <iostream>
#include "Student.h"
#include "Person.h"


using namespace std;

Student::Student(int id) {this->id = id;}
Student::Student() : Student(0) {}
Student::~Student() {}

void Student::set_id() {this->id = id;}
int Student::get_id() {return id;}