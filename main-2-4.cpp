#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);
extern int array_max(int integers[], int length);
extern int array_min(int integers[], int length);

int main() {
    // initialising size of array
    int n = 0;

    // getting user input for size of array
    cout << "Array elements: ";
    cin >> n;

    // initialising array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "Array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    int sum = sum_min_max(array, n);

    cout << "The sum is: " << sum << endl;
}