#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"


using namespace std;

class Student : public Person
{
    protected:
        int id;
    public:
        Student(int id);
        Student();
        ~Student();

        void set_id();
        int get_id();

};

#endif