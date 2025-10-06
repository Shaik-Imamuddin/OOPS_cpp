#include <iostream>
using namespace std;

class Student {
private:
    void display(int n, double m) {
        cout << "Roll NO " << n << " Scored " << m << " Marks" << endl;
    }

public:
    //creating a public method internally to call private method
    void showDetails(int n, double m) {
        display(n, m);
    }
};

int main() {
    int n;
    double m;
    cin >> n >> m;

    Student obj;

    //This would give a compile-time error, as 'display' is private
    // obj.display(n, m);

    //Accessing the private method indirectly
    obj.showDetails(n, m);

    return 0;
}
