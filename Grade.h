#ifndef GRADE_H
#define GRADE_H
#include <iostream>


using namespace std;

class Grade
{
    protected:
        string assignment;
        int value;
    public:
        Grade(string assignment, int value);
        Grade();
        ~Grade();

        void set_assignment(string assignment);
        void set_value(int value);

        string get_assignment();
        int get_value();

};

#endif