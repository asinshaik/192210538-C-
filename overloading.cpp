#include <iostream>
using namespace std;
class Point {
private:
    int x, y; 

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point operator+(const Point &p) {
        return Point(x + p.x, y + p.y); 
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(1, 2);
    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();
    Point p3 = p1 + p2;
    cout << "Point 3 (Result of Point 1 + Point 2): ";
    p3.display();

    return 0;
}


