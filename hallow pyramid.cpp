#include <iostream>
using namespace std;
void printHollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
  
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*"; 
            } else {
                cout << " "; 
            }
        }

        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the hollow pyramid: ";
    cin >> n;

    printHollowPyramid(n);

    return 0;
}

