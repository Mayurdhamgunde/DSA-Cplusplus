#include<iostream>
using namespace std;
int powu(int m,int n){
    if(n==0)return 1;
    return m*powu(m,n-1);
}
int main(){
    
    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    cout<<powu(a,b);
 
    return 0;
}