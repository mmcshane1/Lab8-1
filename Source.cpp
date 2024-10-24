// Laboratory 8
// Author: Megan McShane
// Date: 24th October 2024
// P8-1

#include <iostream>
#include <string>
using namespace std;

int countVowel(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c); // Convert character to lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count; // Return the number of vowels
}

int main() {
    string testStr = "The quick brown fox"; // Test case
    cout << "Number of vowels: " << countVowel(testStr) << endl;
    return 0;
}
