#include<iostream>
using namespace std;
int main(){
    int n,rev=0,last,sum=0;
    int lst;
    cout<<"Enter the number :- ";
    cin>>n;
    int num = n;
    while(n>0){
        rev=rev*10;
        last=n%10;
        rev = rev+last;
        n=n/10;
    }  
    cout<<"Reverse = "<<rev<<endl;
    cout<<"Reverse sum = "<<rev+num;
    return 0;
}