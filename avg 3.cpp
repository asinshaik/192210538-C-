#include <iostream>
using namespace std;
int main() {
    float num1, num2, num3, average;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "The average is: " << average << endl;
	return 0;
}

