#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

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

    // calculating weighted average
    double weighted_av = weighted_average(array, n);

    cout << "The weighted average is: " << weighted_av << "\n";

    return 0;
}