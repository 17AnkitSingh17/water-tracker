#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream file("data.csv");
    if (!file.is_open()) {
        cout << "Error opening data.csv!" << endl;
        return 1;
    }
    
    cout << "File opened successfully. Ready to parse data." << endl;
    file.close();

    return 0;
}