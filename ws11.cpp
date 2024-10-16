#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctype.h>

#define print(x) std::cout << x << std::endl

using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (std::getline(_file, line)) {
                bool isNum = true;
                for (unsigned int i = 0; i < line.size(); i++) {
                    if (isdigit(line[0]) != true) {
                        isNum = false;
                    }
                }
                if (line.size() != 5) {
                    throw("Wrong argument when reading the file: too many digits");
                } else if (isNum != true){
                    throw("Wrong argument when reading the file: non number input ");
                } else {
                    records.push_back(stoi(line));
                }
            }          
        }
            _file.close();
    }
};

int main() {
        
        //RecordsManager receordM("test_clean-1.txt");
        RecordsManager receordM("test_corrupt1.txt");
        //RecordsManager receordM("test_corrupt2.txt");
        Records myRecords;

        // reads records
        try {
            receordM.read(myRecords);
        } catch(const char* msg) {
            std::cerr << msg << std::endl;
        }

        // calculate and print out the sum
        int sum = 0;
        for (unsigned int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    return 0;
}