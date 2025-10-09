#include<iostream>
using namespace std;

class Parent{
public:
    virtual void display(){ 
        cout<<"Parent class"<<endl;
    }
};

class Child:public Parent{
public:
    void display() override{ 
        cout<<"Child class"<<endl;
    }

    void childOnlyMethod(){
        cout<<"Method specific to Child class"<<endl;
    }
};

int main(){
    Parent* obj=new Child(); 
    obj->display();
    delete obj;
    return 0;
}
