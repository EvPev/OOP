#ifndef PERSON_H
#define PERSON_H
#include <iostream>


using namespace std;

class Person
{
    protected:
        string name;
    public:
        Person(string name);
        Person();
        ~Person();

        void set_name(string name);
        string get_name();

};

#endif