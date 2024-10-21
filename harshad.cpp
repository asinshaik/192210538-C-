#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;      
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = sumOfDigits(n);
    if (n % sum == 0) {
        cout << n << " is a Harshad number." << endl;
    } else {
        cout << n << " is not a Harshad number." << endl;
    }

    return 0;
}

