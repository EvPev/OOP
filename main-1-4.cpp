#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    // initiate size of arrays
    int n = 0;

    // get user input for size
    cout << "Size of array: ";
    cin >> n;

    // initiate arrays
    int array[n];
    int secondarray[n];

    // filling arrays
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "Second array element [" << i+1 << "/" << n << "]: ";
        cin >> secondarray[i];
    }

    // calling funciton
    int sum =  sum_two_arrays(array, secondarray, n);

    // printing sum
    cout << "The sum of the arrays is: " << sum << "\n";

    return 0;
}