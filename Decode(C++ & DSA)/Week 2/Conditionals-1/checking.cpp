#include<iostream>
using namespace std;
int main(){
    int amount;
    int n500=0;
    cout<<"Enter amount = ";
    cin>>amount;
    n500+=amount/500;
    cout<<n500<<endl;

    amount -= n500*500;
    cout<<amount<<endl;
    
    return 0;
}