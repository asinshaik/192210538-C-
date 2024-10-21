#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask the user for the size of the square
    cout << "Enter the size of the square: ";
    cin >> size;

    // Loop to print the square pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "* "; // Print an asterisk followed by a space
        }
        cout << endl; // Move to the next line after printing one row
    }

    return 0;
}

