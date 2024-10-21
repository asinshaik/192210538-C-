#include <iostream>
using namespace std;
int main() {
    string inputString;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, inputString);
    for (int i = 0; i < inputString.length(); i++) {
        char ch = tolower(inputString[i]); 
            if (isalpha(ch)) { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
	return 0;
}

