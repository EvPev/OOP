#include <iostream>
#include <cmath>
using namespace std;

bool is_fanarray(int array[], int n) {
    // check if array is valid
    if (n < 1) {
        return false;
    }

    // find half of n rounded up
    double decimal_n = n;
    int half_n = ceil(decimal_n/2);

    // check if array is ascending to half way
    for (int i = 1; i < half_n; i++) {
        if (array[i-1] > array[i]) {
            return false;
        }
    }

    // check if beggining == end, then if second == second from end ect
    for (int i = 0; i < half_n; i++) {
        if (array[i] != array[n - 1 - i]) {
            return false;
        }
    }
    return true;
}