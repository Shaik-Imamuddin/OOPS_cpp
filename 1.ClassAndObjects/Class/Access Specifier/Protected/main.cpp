#include <iostream>
using namespace std;

class Student {
protected:
    void display(int id, double marks) {
        cout << "Roll NO " << id << " Scored " << marks << " Marks" << endl;
    }
};

class Sample : public Student {
public:
    void viewStudent(int a, double b) {
        display(a, b);  // Accessible because Sample inherits from Student
    }
};

class Sample1 {
public:
    void viewStudent(int a, double b) {
        Student s;
        // s.display(102, 88.0);  
        //Not allowed: 'display' is protected in Student
        //can be Accessible only in that class or its child classes
        // Uncommenting the display() method will give compile-time error in C++
    }
};

int main() {
    int a;
    double b;

    cin >> a >> b;

    Sample obj;
    obj.viewStudent(a, b);  

    Sample1 obj1;
    obj1.viewStudent(a,b);

    return 0;
}
