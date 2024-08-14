#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int* readNumbers(int length)
{
    int* array = new int[length];

    for (int i = 0; i < length; i++)
    {
        cout << "Enter number [" << i+1 << "/" << length << "]: ";
        cin >> array[i];
    }

    return array;
}

int secondSmallestSum(int *numbers,int length)
{
    if (length <= 1) {return 0;}
    int subArrays = length * (length + 1)/2;
    int *sums = new int[subArrays];
    int counter = 0;

    int tempSum = 0;
    for (int k = 0; k < length; k++)
    {
        for (int i = 0; i < length - k; i++)
        {
            tempSum = 0;   
            for (int j = 0 + k; j < (length - i); j++)
            {
                tempSum = tempSum + numbers[j];
            }
            sums[counter] = tempSum;
            counter++;
        }
    }

    for (int i = 0; i < subArrays; i++)
    {
        cout << sums[i] << " ";
    }
    cout << endl;




    int secondSmallest = INT_MAX;
    int smallestSum = INT_MAX;

    for (int i = 0; i < subArrays; i++)
    {
        if (secondSmallest > smallestSum && secondSmallest > sums[i]) {
            secondSmallest = sums[i];
        }
        if (smallestSum > sums[i])
        {
            smallestSum = sums[i];
        }  
    }


    delete[] sums;
    return secondSmallest;
}
