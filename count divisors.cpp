#include <iostream>
using namespace std;

// Function to count the number of divisors of a number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int number;

    // Input from user
    cout << "Enter a positive integer: ";
    cin >> number;

    // Ensure the input is positive
    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Count divisors
    int divisorsCount = countDivisors(number);

    // Output the result
    cout << "Number of divisors of " << number << " is: " << divisorsCount << endl;

    return 0;
}

