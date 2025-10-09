//Constructor overloading means having multiple constructors in a class 
//with different parameter lists (number, type, or order of parameters). 
//It allows creating objects in different ways.

#include<iostream>
using namespace std;

class Addition{
public:
    Addition(){
        cout<<"Default constructor called"<<endl;
    }

    Addition(int a,int b){
        cout<<a+b<<endl;
    }

    Addition(int a,double b){
        cout<<a+b<<endl;
    }

    Addition(double a,double b){
        cout<<a+b<<endl;
    }

    Addition(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};

int main(){
    int a,b,c;
    double d,e;

    cin>>a>>b>>c>>d>>e;

    Addition obj1;           // Default constructor called
    Addition obj2(a,b);     // Constructor with 2 integers
    Addition obj3(c,d);     // Constructor with 1 int + 1 double
    Addition obj4(d,e);     // Constructor with 2 doubles
    // Addition obj5(a,b,e); //No constructor with (int, int, double) → error
    Addition obj6(a,b,c);  // Constructor with 3 integers

    return 0;
}