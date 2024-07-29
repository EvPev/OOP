#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    int sum = sum_diagonal(array);

    cout << "Sum: " << sum << endl;
}