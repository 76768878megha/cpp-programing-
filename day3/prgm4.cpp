#include <iostream>
using namespace std;
class student {
public:
int *marks;
student(int m) {
    marks = new int;
    *marks = m;
}
student(const student &s) {
    marks = new int;
    *marks = *(s.marks);
}
void display() {
    cout << *marks << endl;
}
};
int main() {
    student s1(90);
    student s2 = s1;
    cout << "before change:\n";
    s1.display();
    s2.display();
    *s2.marks = 100;
    cout << "\nafter changing s2:\n";
    s1.display();
    s2.display();
    return 0;
}
