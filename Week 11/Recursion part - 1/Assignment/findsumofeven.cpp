#include<iostream>
using namespace std;
int findsum(int m,int n){
    if(m>n)return 0;
    if(m%3==0)return findsum(m+1,n);
    return m+findsum(m+2,n);
}
int main(){
    int a,b;
    cout<<"Enter the number ranges : ";
    cin>>a>>b;
    cout<<findsum(a,b);

    return 0;
}
