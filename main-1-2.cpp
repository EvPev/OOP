#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int array[10][10] = {{1,0,0,0,0,0,0,0,0,0}
                        ,{0,1,0,0,0,0,0,0,0,0}
                        ,{0,0,1,0,0,0,0,0,0,0}
                        ,{0,0,0,1,0,0,0,0,0,0}
                        ,{0,0,0,0,1,0,0,0,0,0}
                        ,{0,0,0,0,0,1,0,0,0,0}
                        ,{0,0,0,0,0,0,1,0,0,0}
                        ,{0,0,0,0,0,0,0,1,0,0}
                        ,{0,0,0,0,0,0,0,0,1,0}
                        ,{0,0,0,0,0,0,0,0,0,1}};
    
    int identity = is_identity(array);
    
    if (identity == 1) {
        cout << "Identity Matrix [True]" << endl;
    }   else {
        cout << "Identity Matrix [False]" << endl;
    }
    
    return 0;
}