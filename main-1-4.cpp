#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() 
{
    int n = 0;
    cout << "No. of people: ";
    cin >> n;
    cout << endl;

    PersonList list = createPersonList(n);



    cout << endl;
    PersonList newList = shallowCopyPersonList(list);

    for (int i = 0; i < n; i++) 
    {
        cout << newList.people[i].name << "|";
        cout << newList.people[i].age  << endl;
    }
    cout << endl;

    list.people[0].age = 11;
        for (int i = 0; i < n; i++) 
    {
        cout << list.people[i].name << "|";
        cout << list.people[i].age  << endl;
    }
    cout << endl;


    for (int i = 0; i < n; i++) 
    {
        cout << newList.people[i].name << "|";
        cout << newList.people[i].age  << endl;
    }
}
