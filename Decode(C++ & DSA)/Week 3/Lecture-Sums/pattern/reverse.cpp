#include<iostream>
using namespace std;
int main(){
    int n;
    int r=0,last=0;
    cout<<"Enter the number = ";
    cin>>n;
    while(n>0){
        r = r*10;
        last = n%10;
        r = r+last;
        n/=10;
    }
    cout<<r;
    return 0;
}