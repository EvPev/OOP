#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string name) {this->name = name;}
Person::Person() : Person("null") {}
Person::~Person() {}

void Person::set_name(string name) {this->name = name;}
string Person::get_name() {return name;}