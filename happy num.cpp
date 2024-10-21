#include <iostream>
#include <unordered_set>
using namespace std;
int sumOfSquareOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10; 
        sum += digit * digit; 
        num /= 10;            
    }
    return sum;
}
bool isHappyNumber(int n) {
    unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);          
        n = sumOfSquareOfDigits(n);  
    }
    return n == 1;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHappyNumber(n)) {
        cout << n << " is a Happy number." << endl;
    } else {
        cout << n << " is not a Happy number." << endl;
    }

    return 0;
}

