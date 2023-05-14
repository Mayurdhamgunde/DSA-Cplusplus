#include<iostream>
using namespace std;
int main() {
    int n,sum=0,last;
    cout<<"Enter the number = ";
    cin>>n;
    int num = n;
    while(n>0){
        last = n%10;
        sum+=last;
        n/=10;
    }
    cout<<sum;
    return 0;
}