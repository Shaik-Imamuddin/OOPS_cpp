#include <iostream>
using namespace std;

class Student {
public:
    int id;
    double marks;
    
    void display() {
        cout << "Roll NO " << id << " Scored " << marks << " Marks" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Student stu[n]; 

    for (int i = 0; i < n; i++) {
        cin >> stu[i].id;
        cin >> stu[i].marks;
    }

    for (int i = 0; i < n; i++) {
        stu[i].display();
    }
    return 0;
}
