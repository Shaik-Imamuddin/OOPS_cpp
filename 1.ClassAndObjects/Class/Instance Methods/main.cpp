#include <iostream>
using namespace std;

class Student {
public:
    void display(int n, double m) {
        cout << "Roll NO " << n << " Scored " << m << " Marks" << endl;
    }
};

int main() {
    int n;
    double m;
    cin >> n;
    cin >> m;
    Student obj;         
    obj.display(n, m);   
    return 0;
}
