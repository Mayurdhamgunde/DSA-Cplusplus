#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void revors(int a[],int n,int idx){
    if(idx==n)return;
    revors(a,n,idx+1);
    cout<<a[idx]<<" ";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements :- "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revors(arr,n,0);
}