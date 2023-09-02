#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
int maxPrint(int arr[],int n,int idx){
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxPrint(arr,n,idx+1));

}
int main(){
    int arr[] = {24,2,6,98,75,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxPrint(arr,n,0);
}