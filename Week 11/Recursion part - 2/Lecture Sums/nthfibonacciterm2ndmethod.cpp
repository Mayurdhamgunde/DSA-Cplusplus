#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1||n==2)return 1;
    int leftAns = fibo(n-1);
    int rightAns = fibo(n-2);
    return leftAns+rightAns;
}
int main(){
    int a;
    cin>>a;
    cout<<fibo(a);

    return 0;
}