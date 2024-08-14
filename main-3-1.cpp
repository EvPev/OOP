#include <iostream>

using namespace std;

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main()
{
    int length = 10;
    int* array_1 = readNumbers();
    int* array_2 =  readNumbers();

    bool trueFalse = equalsArray(array_1, array_2, length);
    if (trueFalse == 1) 
    {
        cout << "Arrays are equal" << endl;
    }
    else if (trueFalse == 0) 
    {
        cout << "Arrays are not equal" << endl;
    }
    delete[] array_1;
    delete[] array_2;
}