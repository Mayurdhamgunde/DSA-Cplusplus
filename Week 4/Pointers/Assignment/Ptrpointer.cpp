#include<iostream>
using namespace std;
int multiply(int *ptr1,int *ptr2){
    return *ptr1 * *ptr2;
}
int main(){
    int x,y;
    cout<<"Enter two numbers = ";
    cin>>x>>y;
    int *ptr1 = &x, *ptr2 = &y;
    int mul = multiply(ptr1,ptr2);
    cout<<mul;

    return 0;
}