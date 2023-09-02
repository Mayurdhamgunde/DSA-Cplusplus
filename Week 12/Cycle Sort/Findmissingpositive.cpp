#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingNumber(vector<int>&nums){
    // your code ---- >
    int n = nums.size();
    for(int i=0;i<n;i++){
        int CI = nums[i]-1;
        while(nums[i]>0 && nums[CI]!=nums[i] && nums[i]<=n){
            swap(nums[i],nums[CI]);
            CI = nums[i]-1;
        }
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1)return i+1;
    }
    return n+1;
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums(arr,arr+n);
    cout<<missingNumber(nums);

    return 0;
}