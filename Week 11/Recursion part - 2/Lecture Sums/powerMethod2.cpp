#include<iostream>
using namespace std;
int powi(int x,int n){
    if(n==1)return x;
    int ans = powi(x,n/2);
    if(n%2==0){
    return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}
int main(){
    int a,b;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    cout<<powi(a,b);

    return 0;
}
