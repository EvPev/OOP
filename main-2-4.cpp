#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
    // initialising size of array
    int n = 0;

    // getting user input for size of array
    cout << "Size of array: ";
    cin >> n;

    // initialising array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    // calling function and checking the outcome
    string ascending_display = "false";
    if (is_ascending(array, n) == 1) {
        ascending_display = "true";
    }

    // printing result
    cout << "The array is accending: " << ascending_display << "\n";
}