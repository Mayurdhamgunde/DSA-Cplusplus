#include<iostream>
using namespace std;
int powu(int x,int n){
    if(n==0)return 1;
    return x*powu(x,n-1);
}
int main(){
    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    cout<<powu(a,b);

}