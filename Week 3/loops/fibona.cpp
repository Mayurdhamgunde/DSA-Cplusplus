#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    int f0=1,f1=1,next=0;

    cout<<f0<<" "<<f1;
    
    for(int i=3;i<=n;i++){
        next=f0+f1;
        cout<<" "<<next;
        f0=f1;
        f1=next;
    }
    
    return 0;
}