#include <iostream>
#include <algorithm>
using namespace std;
bool isSubset(int arr1[], int arr2[], int m, int n) {
    sort(arr2, arr2 + n);
    for (int i = 0; i < m; i++) {
        if (binary_search(arr2, arr2 + n, arr1[i]) == false) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {3, 2, 1, 4, 5};
    
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, arr2, m, n)) {
        cout << "Array 1 is a subset of Array 2." << endl;
    } else {
        cout << "Array 1 is not a subset of Array 2." << endl;
    }

    return 0;
}

