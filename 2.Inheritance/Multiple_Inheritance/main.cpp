#include <iostream>
using namespace std;

class Parent1{
public:
    void par1mthd(){
        cout<<"Parent 1 Properties"<<endl;
    }
};

class Parent2{
public:
    void par2mthd(){
        cout<<"Parent 2 Properties"<<endl;
    }
};

class Child:public Parent1,public Parent2{
public:
    void child() {
        cout<<"Child method"<<endl;
    }
};

int main(){
    Child obj;
    obj.par1mthd();
    obj.par2mthd();
    obj.child();
    return 0;
}