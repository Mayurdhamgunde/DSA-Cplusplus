#include<iostream>
using namespace std;
int steps(int n){
    if(n==0)return 0;
    if(n%2==0){
        return 1+steps(n/2);
    }
    else{
        return 1+steps(n-1);
    }
}
int main(){
    int num;
    cout<<"Enter the number :- ";
    cin>>num;
    cout<<steps(num);
}