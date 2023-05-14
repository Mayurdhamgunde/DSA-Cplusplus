#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number = ";
    cin>>n;
    while(n>0){
        n/=10;
        count++;
    }
    if(count==0){
     cout<<"1";
    }
    else{
     cout<<count;
    }
    return 0;
}