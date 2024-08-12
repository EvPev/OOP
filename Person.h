#include <iostream>

using namespace std;

#ifndef PERSON_H
#define PERSON_H

struct Person
{
    string name;
    int age;
};

struct PersonList
{
    Person* people;
    int numPeople;
};


#endif