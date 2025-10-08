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

class Child:public Parent{
public:
    void chldprop(){
        cout<<"Child Properties"<<endl;
    }
};

int main(){
    Child obj;
    obj.chldprop();
    obj.parprop();
    obj.grdprop();
    return 0;
}