#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    ifstream gridFile("../inputs/grid.txt");
    vector<string> grid;
    string line;

    
    while (getline(gridFile, line)) {
        grid.push_back(line);
    }

    
    ifstream dirFile("../inputs/directions.txt");
    int rowIdx;
    char direction;
    int count;
    char comma; 
    while (dirFile >> rowIdx >> comma >> direction >> comma >> count) {
        
       
        if (rowIdx < 0 || rowIdx >= grid.size()) continue;

        string original = grid[rowIdx];
        string rotated = "";
        int len = original.length();
        int shift = count % len; 

        if (direction == 'R') {

            string part1 = original.substr(len - shift); 
            string part2 = original.substr(0, len - shift);
            rotated = part1 + part2;
        } 
        else if (direction == 'L') {
          
            string part1 = original.substr(shift); 
            string part2 = original.substr(0, shift); 
            rotated = part1 + part2;
        }

        grid[rowIdx] = rotated;
    }

   
    int middleIndex = grid.size() / 2;
    string middleRow = grid[middleIndex];
    
    cout << "Middle Row: " << middleRow << endl;

  
    int totalSum = 0;
    for (int i = 0; i < middleRow.length(); i++) {
        totalSum += (int)middleRow[i];
    }

    cout << "Clue 1: " << totalSum << endl;
    return 0;
}