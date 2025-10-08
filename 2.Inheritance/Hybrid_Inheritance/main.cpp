#include<iostream>
using namespace std;

class Grandparent{
public:
    void grdprop(){
        cout<<"Grand Parent Properties"<<endl;
    }
};

class Parent:public Grandparent{
public:
    void parprop(){
        cout<<"Parent Properties"<<endl;
    }
};

class Child1:public Parent{
public:
    void chld1prop(){
        cout<<"Child1 Properties"<<endl;
    }
};

class Child2:public Parent{
public:
    void chld2prop(){
        cout<<"Child2 Properties"<<endl;
    }
};

int main(){
    Child1 obj;
    obj.chld1prop();
    obj.parprop();
    obj.grdprop();

    Child2 obj1;
    obj1.chld2prop();
    obj1.parprop();
    obj1.grdprop();

    return 0;
}