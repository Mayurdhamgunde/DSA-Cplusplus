#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
void subsequence(int arr[],int n,int idx,vector<int>ans,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int ele : ans){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
        return;
    }
    subsequence(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    subsequence(arr,n,idx+1,ans,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    subsequence(arr,n,0,v,k);
}
