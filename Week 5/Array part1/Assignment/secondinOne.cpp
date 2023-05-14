#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1){
            max2=arr[i];
        }

    }
    cout<<max2;

    return 0;
}