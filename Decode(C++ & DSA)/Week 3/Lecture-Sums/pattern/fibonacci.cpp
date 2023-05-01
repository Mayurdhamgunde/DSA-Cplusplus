#include<iostream>
using namespace std;
int main(){
    int n1=1,n2=1,sum=0,n;
    cin>>n;

    for(int i=1;i<=n-2;i++){
        sum = n1+n2;
        n1=n2;
        n2=sum;
    }
     cout<<n2;
     
    return 0;
}