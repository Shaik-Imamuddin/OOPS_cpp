//if you want to access instance property in a static property
//the only way we can Access is by Creating a Object

#include <iostream>
using namespace std;

class Student {
public:
    int id;
    double marks;
};

int main() {
    Student obj;  
    cin >> obj.id;
    cin >> obj.marks;
    cout << "Roll NO " << obj.id << " Scored " << obj.marks << " Marks" << endl;
    return 0;
}
