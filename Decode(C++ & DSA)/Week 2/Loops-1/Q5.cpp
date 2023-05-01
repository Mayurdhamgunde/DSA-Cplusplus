#include<iostream>
using namespace std;
int main(){
    int n;
    int start = 3,cd=4;
    cout<<"Enter the no. of terms :- ";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<start<<" ";
        start=start*cd;
    }

    return 0;
}