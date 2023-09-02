#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reversi(int a[],int idx){
    if(idx==-1) return;
    cout<<a[idx]<<" ";
    return reversi(a,idx-1);
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversi(arr,n-1);
}
