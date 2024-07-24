#include <iostream>
#include <iomanip>
using namespace std;

extern double array_mean(int array[], int n);

int main() {

    // initiating variable for size of array
    int n = 0;

    // requesting input for size of array
    cout << "Size of array: ";
    cin >> n;

    // initiating array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    // calling sum function
    double average = array_mean(array, n);

    // printing the average
    cout << "The average of the array's elements is: " << fixed << setprecision(1) << average << "\n";

    return 0;
}