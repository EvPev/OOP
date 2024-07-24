#include <iostream>
using namespace std;

// function declaration
extern int array_sum(int array[], int n);

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
    int sum = array_sum(array, n);

    // printing the sum
    cout << "The sum of the array's elements is: " << sum << "\n";

    return 0;
}