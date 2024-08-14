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

int secondSmallestSum(int *numbers,int length)
{
    if (length <= 1) {return 0;}
    int subArrays = length * (length + 1)/2;
    int *sums = new int[subArrays];

    int tempSum = 0;
    for (int k = 0; k < length; k++)
    {
        for (int i = 0 + k; i < length; i++)
        {
            tempSum = 0;   
            for (int j = 0 + k; j < (length - i); j++)
            {
                tempSum = tempSum + numbers[j];
            }
            sums[i] = tempSum;
        }
    }

    for (int i = 0; i < subArrays; i++)
    {
        cout << sums[i] << " " << endl;
    }




    int secondSum = sums[0];
    int smallestSum = sums[0];

    for (int i = 0; i < subArrays; i++)
    {
        if (smallestSum > sums[i])
        {
            secondSum = smallestSum;
            smallestSum = sums[i];
        }   
    }

    if (smallestSum == secondSum) 
    {
        smallestSum = sums[1];
        for (int i = 0; i < subArrays; i++)
        {
            if (smallestSum > sums[i])
            {
                secondSum = smallestSum;
                smallestSum = sums[i];
            }   
        } 
    }

    delete[] sums;
    return secondSum;
}