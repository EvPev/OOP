#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>


using namespace std;

class Student
{
    protected:
        string name;
        string location;
    public:
        Student(string name, string location);
        Student();
        ~Student();

        void set_Name(string name);
        void set_Location(string location);
        string get_Name();
        string get_Location();

        void addCourse(string name, int id);
};

#endif