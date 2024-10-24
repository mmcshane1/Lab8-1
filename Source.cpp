// Laboratory 8
// Author: Megan McShane
// Date: 24th October 2024
// P8-1

#include <iostream>
#include <string>
using namespace std;

// Function prototype
int countVowel(string str);

int main() {
    string input;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        if (input == "Q") {
            break;
        }

        int vowelCount = countVowel(input);
        cout << "Vowel count: " << vowelCount << endl;
    }
    return 0;
}

// Function definition
int countVowel(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

