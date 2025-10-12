#include<iostream>
using namespace std;

class Addition{ 
public:
    virtual void add()=0;
};

class Subtraction:public Addition{
    int a,b;
public:
    Subtraction(int a,int b){
        this->a=a;
        this->b=b;
    }
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b<<endl;
    }
};

int main(){
    int a,b;
    cin>>a>>b;
    Subtraction obj(a,b);
    obj.add();
    obj.sub();
    return 0;
}