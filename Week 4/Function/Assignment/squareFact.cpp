#include<iostream>
using namespace std;
int squar(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i*i;
    }

    return fact;
}
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<squar(n);

    return 0;
}