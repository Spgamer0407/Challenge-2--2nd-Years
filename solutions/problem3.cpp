#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false; 
    
  
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    
    ifstream file("../inputs/states.txt");
    
    if (!file.is_open()) {
        cerr << "Error: Could not open inputs/states.txt" << endl;
        return 1;
    }

    int number;
    int doneCount = 0;
    string segment;

   
    while (file >> segment) {
        
        if (segment.back() == ',') segment.pop_back();
        
        try {
            number = stoi(segment);
        } catch (...) { continue; } 

      
        bool prime = isPrime(number);
        bool even = (number % 2 == 0);

        if (prime) {
           
            doneCount++;
        } 
        else if (even) {
           
            doneCount++;
        } 
        else {
          
        }
    }

    
    cout << "Clue 3: " << doneCount << endl;

    return 0;
}