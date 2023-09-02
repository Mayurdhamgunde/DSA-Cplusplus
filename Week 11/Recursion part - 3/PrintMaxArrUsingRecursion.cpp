#include<bits/stdc++.h> 
#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
}
int main(){
    int arr[] = {42,15,14,100,65,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);

    return 0;
}