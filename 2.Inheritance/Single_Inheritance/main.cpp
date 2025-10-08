#include<iostream>
using namespace std;

class Parent{
public:
    void parprop(){
        cout << "Parent Properties" << endl;
    }
};

class Child:public Parent{
public:
    void chldprop(){
        cout << "Child Properties" << endl;
    }
};

int main(){
    Child obj;       
    obj.chldprop();  
    obj.parprop();
    return 0;
}