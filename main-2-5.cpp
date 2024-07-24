#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

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
    string descending_display = "false";
    if (is_descending(array, n) == 1) {
        descending_display = "true";
    }

    // printing result
    cout << "The array is descending: " << descending_display << "\n";
}