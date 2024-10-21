#include <iostream>
#include <unordered_set>
using namespace std;

// Function to check for duplicate characters in a string
bool hasDuplicateCharacters(const string &str) {
    unordered_set<char> charSet; // Set to store unique characters

    for (char ch : str) {
        // If the character is already in the set, it's a duplicate
        if (charSet.find(ch) != charSet.end()) {
            return true; // Duplicate found
        }
        charSet.insert(ch); // Insert the character into the set
    }
    return false; // No duplicates found
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read input string including spaces

    if (hasDuplicateCharacters(input)) {
        cout << "The string contains duplicate characters." << endl;
    } else {
        cout << "The string does not contain duplicate characters." << endl;
    }

    return 0;
}

