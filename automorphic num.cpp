#include <iostream>
using namespace std;

// Function to check if a number is automorphic
bool isAutomorphic(int number) {
    // Calculate the square of the number
    int square = number * number;

    // Variable to keep track of the original number
    int temp = number;

    // Check if the square ends with the original number
    while (square > 0) {
        // If the last digit of the square doesn't match the last digit of the number
        if (square % 10 != temp % 10) {
            return false; // Not automorphic
        }
        square /= 10; // Remove the last digit of the square
        temp /= 10;   // Remove the last digit of the original number
    }

    // If all digits match, the number is automorphic
    return temp == 0; // If temp is reduced to 0, it means all digits matched
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isAutomorphic(number)) {
        cout << number << " is an automorphic number." << endl;
    } else {
        cout << number << " is not an automorphic number." << endl;
    }

    return 0;
}

