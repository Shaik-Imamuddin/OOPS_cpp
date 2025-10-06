#include <iostream>
using namespace std;

class Student {
public:
    void display(int n, double m) {
        cout << "Roll NO " << n << " Scored " << m << " Marks" << endl;
    }
};

int main() {
    Student obj;
    int n;
    double m;

    cin >> n >> m;
    obj.display(n, m);

    return 0;
}