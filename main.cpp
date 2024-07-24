#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int array[], int n);

int main() {
    int n = 5;
    int array[n] = {4,5,6,7,8};

    std::cout << "The number is: " << count(array, n) << std::endl;
    return 0;
}