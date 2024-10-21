#include <iostream>
using namespace std;
class FloydsTriangle {
    int rows;
public:
    FloydsTriangle(int r) : rows(r) {
        printTriangle();
    }
    void printTriangle() {
        int number = 1; 
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << number << " "; 
                number++;
            }
            cout << endl;  
        }
    }
    ~FloydsTriangle() {
        cout << "Floyd's Triangle object destroyed." << endl;
    }
};

int main() {
    int rows;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    FloydsTriangle triangle(rows);

}
