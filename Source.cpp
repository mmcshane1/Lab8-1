// Laboratory 8
// Author: Megan McShane
// Date: 24th October 2024
// P8-1

//comment
#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str) {
    return str.length(); // Return the length of the string
}

int main() {
    string testStr = "The quick brown fox"; // Test case
    cout << "Number of characters: " << countCharacter(testStr) << endl;
    return 0;
}