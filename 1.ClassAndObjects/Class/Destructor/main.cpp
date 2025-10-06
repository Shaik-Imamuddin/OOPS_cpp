// A destructor is a special method 
// it will automatically called when an object goes out of scope.

// Its name is the same as the class name but prefixed with a tilde ~.
// No return type & no parameters.

#include <iostream>
using namespace std;

class Student {
    int roll;
    double marks;

public:
    Student(int r, double m) {
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Roll NO " << roll << " Scored " << marks << " Marks" << endl;
    }

    ~Student() {
        cout << "Destructor Called: Object Destroyed" << endl;
    }
};

int main() {
    int a,b;
    cin>>a>>b;
    Student s1(a,b);  
    s1.display();
    return 0;   // Destructor will be called here automatically
}