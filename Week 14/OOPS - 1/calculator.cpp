#include<iostream>
using namespace std;
class Calculator {
public:
    int a;
    int b;

    void add(){
        cout<<a+b;
    }
    void sub(){
        cout<<a-b;
    }
    void mul(){
        cout<<a*b;
    }
};
int main(){
    Calculator calci;
    cout<<"Enter the values : ";
    cin>>calci.a;
    cin>>calci.b;

    calci.add();
    cout<<endl;
    calci.sub();
    cout<<endl;
    calci.mul();

    return 0;
}