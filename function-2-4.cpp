#include <iostream>
using namespace std;

bool is_ascending(int array[], int n) {
    // check if array is valid
    if (n < 1) {
        return false;
    }

    // initiating ascending variable
    bool ascending = true;

    // check if the previous array value was lower
    for (int i = 1; i < n; i++) {
        if (array[i-1] > array[i]) {
            ascending = false;
        }
     }

    return ascending;
}