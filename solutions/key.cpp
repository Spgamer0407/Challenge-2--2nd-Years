#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip> 
using namespace std;

int main() {
    
    int clue1 = 385; 
    int clue2 = 3; 
    int clue3 = 7; 
   

  
    stringstream ss;
    ss << hex << clue1; 
    string part1 = ss.str();

    // 2. Repeat Clue 2, Clue 3 times
    string part2 = "";
    for (int i = 0; i < clue3; i++) {
        part2 += to_string(clue2);
    }

    
    string finalKey = part1 + "-" + part2;

  
    ofstream keyFile("final_key.txt");
    if (keyFile.is_open()) {
        keyFile << finalKey;
        keyFile.close();
        cout << "Success! Key saved to final_key.txt: " << finalKey << endl;
    } else {
        cerr << "Error: Could not write to final_key.txt" << endl;
    }

    return 0;
}
