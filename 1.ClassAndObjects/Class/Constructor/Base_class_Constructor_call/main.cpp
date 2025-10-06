//There is no super method in cpp
//instead of that we are using base class construtcor call 
#include <iostream>
using namespace std;

class Addition {
protected:
    int a, b;
public:
    Addition(int a, int b) {
        this->a = a;
        this->b = b;
    }
    void add() {
        cout << "Sum: " << a + b << endl;
    }
};

class Subtraction : public Addition {
public:
    Subtraction(int a, int b) : Addition(a, b) {}

    void sub() {
        cout << "Difference: " << a - b << endl;
    }
};

int main() {
    int a, b;
    cin >> a >> b;
    Subtraction obj(a,b);
    obj.add();
    obj.sub();
    return 0;
}
