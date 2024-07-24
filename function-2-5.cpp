#include <iostream>
using namespace std;

bool is_descending(int array[], int n) {
    // check if array is valid
    if (n < 1) {
        return false;
    }

    // initiating ascending variable
    bool descending = true;

    // check if the previous array value was higher
    for (int i = 1; i < n; i++) {
        if (array[i-1] < array[i]) {
            descending = false;
        }
     }

    return descending;
}    
