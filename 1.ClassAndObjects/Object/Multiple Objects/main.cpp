#include <iostream>
using namespace std;

class Student {
public:
    int id;
    double marks;

    void display() {
        cout << "Roll NO " << id << " Scored " << marks << " Marks" << endl;
    }
};

int main() {
    Student s1;  
    s1.id = 1;
    s1.marks = 100;

    Student s2;  
    s2.id = 2;
    s2.marks = 95;

    s1.display();
    s2.display();

    return 0;
}
