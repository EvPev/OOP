#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int median_array(int array[], int n) {
    // checking if array size is valid
    if (n < 1 || n % 2 == 0) {
        return 0;
    }

    // sorting the array
    sort(array, array+n);

    // find half n
    double decimal_n = n;
    int half_n = decimal_n/2;

    return array[half_n];
}