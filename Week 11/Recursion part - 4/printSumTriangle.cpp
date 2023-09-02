#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void go(int arr[],int n){
    if(n<1)return;
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        temp[i] = arr[i]+arr[i+1];
    }
    for(auto x : temp){
        cout<<x<<" ";
    }
        cout<<endl;
    go(temp,n-1);
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    go(arr,n);

    return 0;
}
