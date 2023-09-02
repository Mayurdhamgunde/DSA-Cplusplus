#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void subarray(vector<int>v,int arr[],int n,int idx){
    if(idx==n){
        for(int ele : v){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
    subarray(v,arr,n,idx+1);
    v.push_back(arr[idx]);
    subarray(v,arr,n,idx+1);

}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subarray(v,arr,n,0);
}

