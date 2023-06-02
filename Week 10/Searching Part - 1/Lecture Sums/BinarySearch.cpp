#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int search(vector<int>&nums,int target){
    int lo = 0;
    int hi = nums.size()-1;
    while(lo<=hi){
        int mid = lo+((hi-lo/2));
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) lo = mid+1;
        else hi = mid-1;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int target;
    vector<int> v;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<"Enter the target : ";
    cin>>target;

    cout<<search(v,target);

    return 0;
}