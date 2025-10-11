#include<iostream>
using namespace std;

class Addition{
private:
    int a,b;
public:
    Addition(int a,int b){
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
    Addition obj(a,b);
    obj.add();
    return 0;
}