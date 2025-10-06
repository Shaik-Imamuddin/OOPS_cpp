//if you want to access static property with in a static property
//we can Directly Access by using className without Creating any Object

#include <iostream>
using namespace std;

class Student {
public:
    static int id;
    static double marks;
};

//refer the above points once

//here main is not a static method so,
// Define static members outside the class
int Student::id;
double Student::marks;

int main() {
    cin >> Student::id;
    cin >> Student::marks;
    cout << "Roll NO " << Student::id << " Scored " << Student::marks << " Marks" << endl;
    return 0;
}

//Why we need to define static members out side the class

// The class declaration only declares them, it doesn’t allocate memory.
// You must define them outside the class so the compiler can allocate storage in memory.