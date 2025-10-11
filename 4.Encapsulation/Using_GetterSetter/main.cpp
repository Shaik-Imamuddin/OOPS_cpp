#include<iostream>
using namespace std;

class Addition{
private:
    int a,b;
public:
    int getA(){
        return a;
    }
    int getB(){
        return b;
    }
    void setAB(int a,int b){
        this->a=a;
        this->b=b;
    }
    void add(){
        cout<<a+b<<endl;
    }
};

int main(){
    int a,b;
    cin>>a>>b;
    Addition obj;
    obj.setAB(a,b);
    obj.add();
    return 0;
}