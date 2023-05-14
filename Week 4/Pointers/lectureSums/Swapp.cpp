#include<bits/stdc++.h>
using namespace std;
int swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
    cout<<"a = "<<a<<" "<<"b = "<<b;
    cout<<"\n ";
}
int main(){
    int a,b;
    cout<<"Enter the numbers = ";
    cin>>a>>b;
    cout<<"\nValues before swapping :- "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    cout<<"\nValues after swapping :- "<<endl;
    swap(a,b);

    return 0;
}