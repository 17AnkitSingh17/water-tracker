#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("data.csv");
    if (!file.is_open()) {
        cout << "Error: data.csv file nahi mili!" << endl;
        return 1;
    }

    string line, time, action, quantityStr;
    int totalFull = 0;
    int totalEmpty = 0;

    getline(file, line);

    while (getline(file, line)) {
      
        if (line.empty() || line == "\r") continue;

        stringstream ss(line);
        getline(ss, time, ',');
        getline(ss, action, ',');
        getline(ss, quantityStr, ',');


        try {
            int quantity = stoi(quantityStr);

            if (action == "Supplier_Dropped_Full") totalFull += quantity;
            else if (action == "Student_Took_Full") totalFull -= quantity;
            else if (action == "Student_Returned_Empty") totalEmpty += quantity;
            else if (action == "Supplier_Picked_Empty") totalEmpty -= quantity;
        } catch (...) {
    
            continue; 
        }
    }

    
    cout << "\n--- WATER CAMPER INVENTORY REPORT ---\n";
    cout << "Current Full Bottles Available: " << totalFull << "\n";
    cout << "Current Empty Bottles (to return): " << totalEmpty << "\n";
    cout << "-------------------------------------\n\n";

    file.close();
    return 0;
}