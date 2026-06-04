#include <iostream>
#include <string>
using namespace std;
class Rectangle {
    private:
    double length;
    double width;
    public:
    Rectangle() {
        length = 0;
        width = 0;
        cout << "defsult constructor" << endl;
    }
    Rectangle(double side) {
        length = side;
        width = side;
        cout << "square constructor" <<endl;
    }
    Rectangle (double l,double w) {
        length = l;
        width = w;
        cout << "two-parameter constructor" <<endl;
    } 
    Rectangle(const Rectangle &r) {
        length = r.length;
        width = r.width;
        cout << "copy constructor" << endl;
    }
    double area() {return length*width;}
};
int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4,6);
    Rectangle r4=r3;
     cout << "\nareas:"<<r1.area() << r4 .area() <<endl;
    return 0;
}

