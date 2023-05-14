#include<iostream>
using namespace std;
int main(){
    int n,sum=0,num,last;
    cout<<"Enter the number :- ";
    cin>>n;
    num = n;
    while(num>0){
    last=num%10;
    if(num%2==0){
    sum = sum+last;
    }
    num = num/10;
    
}
    cout<<"Sum of even digit := "<<sum;
    return 0;
}