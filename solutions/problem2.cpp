#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isVowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

int main() {
    ifstream inputFile("../inputs/input2.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open inputs/input2.txt" << endl;
        return 1;
    }

    string rawString;
   
    getline(inputFile, rawString, '\0'); 

    
    string step1 = rawString;
    reverse(step1.begin(), step1.end());

    
    string step2 = "";
    for (int i = 0; i < step1.length(); i++) {
       
        if ((i + 1) % 3 != 0) {
            step2 += step1[i];
        }
    }

    
    string step3 = "";
    for (char c : step2) {
        step3 += (char)(c + 2);
    }

    
    int vowelCount = 0;
    for (char c : step3) {
        if (isVowel(c)) {
            vowelCount++;
        }
    }

    cout << "Clue 2 (Vowel Count): " << vowelCount << endl;
    return 0;
}