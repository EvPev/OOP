#include <iostream>

using namespace std;

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main()
{
    int length = 10;
    int* fArray = readNumbers();

    int* rArray = reverseArray(fArray, length);

    bool trueFalse = equalsArray(fArray, rArray, length);
    if (trueFalse == 1) 
    {
        cout << "Arrays are equal" << endl;
    }
    else if (trueFalse == 0) 
    {
        cout << "Arrays are not equal" << endl;
    }
    delete[] fArray;
    delete[] rArray;


}