#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

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

    // finding median of array
    int median = median_array(array, n);

    // printing results
    cout << "The median of the array is: " << median << "\n";
}