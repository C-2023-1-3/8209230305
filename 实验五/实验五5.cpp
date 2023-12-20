#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void setPoint(int i, int j) {
        x += i;
        y += j;
    }
    void display() {
        cout<< "The coordinates after modification are: (" << x << ", " << y << ")" <<endl;
    }
};
int main() {
    int e;
    int l;
    cin >> e;
    cin >> l;
    Point p1(60, 80);
    p1.display();
    p1.setPoint(e,l);
    p1.display();
    return 0;
}