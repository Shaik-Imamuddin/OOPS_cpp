//if you want to access static property in a static property
//we can Directly Access by using className without Creating any Object

#include <iostream>
using namespace std;

class Student {
public:
    static void display(int n, double m) {
        cout << "Roll NO " << n << " Scored " << m << " Marks" << endl;
    }
};

int main() {
    int n;
    double m;
    cin >> n >> m;

    // Calling static method using class_name 
    Student::display(n, m);

    return 0;
}
