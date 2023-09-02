#include<iostream>
using namespace std;
class Complexnumber{
 public:
    int real;
    int imaginary;
};
int main(){
    Complexnumber a;
    Complexnumber b;
    a.real = 10;
    a.imaginary = 5;

    b.real = 50;
    b.imaginary = 12;

    Complexnumber c;
    c.real = a.real+b.real;
    c.imaginary = a.imaginary+b.imaginary;

    cout<<"real = "<<c.real<<" "<<"imaginary = "<<c.imaginary;

    return 0;
}