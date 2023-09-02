#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int duplicate(vector<int>nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i];
        if(nums[correctIdx]==nums[i])return nums[i];
        else swap(nums[i],nums[correctIdx]);
    }
    return -1;
}
int main(){
    int arr[] = {1,3,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+n);
    cout<<duplicate(nums);

    return 0;
}