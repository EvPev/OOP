#include <iostream>
#include <iomanip>
using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
    // initiating variables
    int n = 0;
    int number = 0;
    int duplicate_numbers = 0;

    // requesting input for size of array and number
    cout << "Size of array: ";
    cin >> n;

    cout << "Number to check: ";
    cin >> number;

    // initiating array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    // calling num_check function
    duplicate_numbers = num_count(array, n, number);

    // printing number of duplicates
    cout << "There are " << duplicate_numbers << " instances of " << number << " in the array\n";

    return 0;
}