// This is used to differentiate 
// the data members of a class and Arguments of a function 
// when they have the same name.

#include <iostream>
using namespace std;

class Student {
    int n;
    double m;

public:
    Student(int n, double m) {
        this->n = n;
        this->m = m;
    }

    void display() {
        cout << "Roll NO " << n << " Scored " << m << " Marks" << endl;
    }
};

int main() {
    int n;
    double m;

    cin >> n >> m;

    Student obj(n, m);
    obj.display();

    return 0;
}