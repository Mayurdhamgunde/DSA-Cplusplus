#include<iostream>
using namespace std;
int fibon(int n){
    if(n==1 || n==2)return 1;
    return fibon(n-1)+fibon(n-2);
}
int main(){
    int a;
    cout<<"Enter term : ";
    cin>>a;
    cout<<fibon(a);
}