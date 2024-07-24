#include <iostream>
using namespace std;

double array_mean(int array[], int n) {
    // checking if the size is valid
    if (n < 1) {
        return 0.0;
    }
    // Initiating average and sum variables
    double average = 0;
    double sum = 0;

    // Calculating sum of array elements
    for(int i = 0; i < n; i++) {
        sum = sum + array[i];
    }

    // Calculating average
    average = sum/n;

    // returning the average
    return average;
}