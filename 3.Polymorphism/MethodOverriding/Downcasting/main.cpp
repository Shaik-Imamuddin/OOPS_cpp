#include<iostream>
using namespace std;

class Parent{
public:
    virtual void display(){ 
        cout<<"Parent class"<<endl;
    }
    virtual ~Parent(){} 
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
    Parent* obj=new Child();//upcasting
    obj->display(); 

    //downcasting -> type casting the parent object into child and storing it in another child object
    Child* c=(Child*)obj; 
    c->display();
    c->childOnlyMethod(); // Now we can access Child-specific methods

    delete obj;
    return 0;
}