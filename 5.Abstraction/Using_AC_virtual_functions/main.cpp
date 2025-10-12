#include<iostream>
using namespace std;

class Addition{
protected:
    int a,b;
public:
    Addition(int a,int b){
        this->a=a;
        this->b=b;
    }
    virtual void add()=0; 

    void nabsMethod(){ 
        cout<<"This is a Non-Abstract Method"<<endl;
    }
};

class Subtraction:public Addition{
public:
    Subtraction(int a,int b):Addition(a,b){}
    void sub(){
        cout<<a-b<<endl;
    }
    void add(){
        cout<<a+b<<endl;
    }
};

int main(){
    int a,b;
    cin>>a>>b;
    Subtraction obj(a,b);
    obj.nabsMethod();
    obj.add();
    obj.sub();
    return 0;
}