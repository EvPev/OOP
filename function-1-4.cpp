#include <iostream>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl)
{
    PersonList newList;

    newList.people = pl.people;
    newList.numPeople = pl.numPeople;
    
    return newList;
}