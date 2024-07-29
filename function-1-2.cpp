#include <iostream>
using namespace std;

int is_identity(int array[10][10]) {

    int sum = 0;
    int ones_diagonal = 1;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            sum = sum + abs(array[i][j]);
            if (array[i][i] != 1) {
                ones_diagonal = 0;
            }
        }
    }
    
    if (sum == 10 && ones_diagonal == 1) {
        return 1;
    } else {
        return 0;
    }
}