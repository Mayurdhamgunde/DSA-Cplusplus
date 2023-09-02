#include<iostream>
using namespace std;
int factu(int n){
    if(n==0)return 1;
    return n*factu(n-1);
}
int main(){
    int m;
    cout<<"Enter the number = ";
    cin>>m;
    cout<<factu(m);
}