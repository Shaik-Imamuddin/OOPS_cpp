//if you want to create only single object for a class
//we can assign static values(recomended)
//else we can also get the data fro the user

#include <iostream>
using namespace std;

class Student {
    int id = 1;
    double marks = 100;

public:
    void display() {
        cout << "Roll NO " << id << " Scored " << marks << " Marks" << endl;
    }
};

int main() {
    Student obj;  
    obj.display(); 
    return 0;
}
