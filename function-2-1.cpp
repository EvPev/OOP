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

void hexDigets(int* array, int length) 
{
    char hexArray[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if (length > 0)
    {
        for(int i = 0; i < length; i++) 
        {
            cout << i << " " << array[i] << " " << hexArray[array[i]] << endl;
        }
    }

}