#include <iostream>
using namespace std;

double sum_even(double array[], int n) {
    // Checking if array is valid
    if (n < 1) {
        return 0;
    }

    // finding sum
    double sum = 0;

    for (int i = 0; i < n; i = i + 2) {
        sum = sum + array[i];
    }

    return sum;
}