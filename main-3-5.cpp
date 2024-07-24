#include <iostream>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
    // initialising size of array
    int n = 0;

    // getting user input for size of array
    cout << "Size of array: ";
    cin >> n;

    // initialising array
    double array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }


    // calculating even_sum
    double even_sum = sum_even(array, n);

    cout << "Sum of elements in even positions is: " << even_sum << "\n";

}