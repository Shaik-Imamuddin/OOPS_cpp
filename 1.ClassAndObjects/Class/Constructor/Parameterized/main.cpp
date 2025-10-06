#include <iostream>
using namespace std;

class Student {
    int n;
    double m;

public:
    Student(int a, double b) {
        n = a;
        m = b;
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