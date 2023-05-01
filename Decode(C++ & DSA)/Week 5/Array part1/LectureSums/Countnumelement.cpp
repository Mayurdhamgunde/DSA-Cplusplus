#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size = ";
    cin>>n;

    cout<<"Enter elements = ";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key = ";
    cin>>key;
    int sum=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>key){
            sum++;
        }
    }
    cout<<sum;

    return 0;
}