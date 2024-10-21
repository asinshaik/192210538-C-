#include <iostream>
using namespace std;
int countDigits(int number) {
    if (number < 0) {
        number = -number;
    }
    if (number == 0) {
        return 1;
    }

    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int digitCount = countDigits(number);
    cout << "The number of digits in " << number << " is: " << digitCount << endl;

    return 0;
}

