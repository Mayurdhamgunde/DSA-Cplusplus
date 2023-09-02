#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>&nums){
    int n = nums.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    int actualSum = n*(n+1)/2;
    return actualSum - sum;
}
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>nums(arr,arr+n);
    cout<<endl;
    for(auto x: nums) cout<<x<<" ";
    cout<<endl;
    cout<<endl;
    cout<<missingNumber(nums);

    return 0;
}