#include <iostream>

using namespace std;

int* readNumbers()
{
    int* array = new int[10];
    cout << "Enter 10 numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number [" << i+1 << "/10]: ";
        cin >> array[i];
    }

    return array;
}

bool equalsArray(int *numbers1,int *numbers2,int length)
{
    if (length <= 0) {return false;}
    
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i]) {return false;}
    }
    return true;
}