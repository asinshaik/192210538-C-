#include <iostream>
using namespace std;

// Function to check if the number is a Buzz number
bool isBuzzNumber(int n) {
    // A number is a Buzz number if it is divisible by 7 or ends with 7
    return (n % 7 == 0 || n % 10 == 7);
}

int main() {
    int n;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is a Buzz number
    if (isBuzzNumber(n)) {
        cout << n << " is a Buzz number." << endl;
    } else {
        cout << n << " is not a Buzz number." << endl;
    }

    return 0;
}

