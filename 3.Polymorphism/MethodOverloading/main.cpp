#include<iostream>
using namespace std;

class Addition{
public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void add(int a,double b) {
        cout<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};

int main(){
    int a,b,c;
    double d,e;

    cin>>a>>b>>c>>d>>e;

    Addition obj;
    obj.add(a,b);     //method with 2 integer parameters called
    obj.add(c,d);     //method with 1 integer + 1 double parameters called
    obj.add(d,e);     //method with 2 double parameters called
    // obj.add(a,b,e); //no method with 2 int + 1 double → error
    obj.add(a,b,c);  //method with 3 integer parameters called

    return 0;
}