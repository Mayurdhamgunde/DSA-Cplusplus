#include<iostream>
using namespace std;
int main(){
    int n;
    int start = 4;
    cout<<"Enter the term :- ";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<start<<" ";
        start = start+3;
    }
    return 0;
}