#include <iostream>
using namespace std;

void print_pass_fail(char grade) {
    switch (grade) {
        case 'A' :
            cout << "Pass\n";
            break;
        case 'B':
            cout << "Pass\n"; 
            break;
        case 'C':
            cout << "Pass\n";
            break;
        case 'D':
            cout << "Fail\n";
            break;
        case 'E':
            cout << "Fail\n";
            break;
        default:
            cout << "Nothing\n";
    }
}