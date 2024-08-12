#include <iostream>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl)
{
    PersonList newList;

    newList.people = new Person[pl.numPeople];
    newList.numPeople = pl.numPeople;

    for (int i = 0; i < pl.numPeople; i++)
    {
        newList.people[i] = pl.people[i];
    }
    
    return newList;
}