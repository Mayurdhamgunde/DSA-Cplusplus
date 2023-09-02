#include<iostream>
#include<vector>
using namespace std;
vector<int>findnumber(vector<int>&nums,vector<int>&ans){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int correctIdx = nums[i] - 1;
        if(nums[correctIdx]==nums[i])i++;
        else swap(nums[i],nums[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1)ans.push_back(i+1);
    }
    int o = ans.size();
    for(int i=0;i<o;i++)cout<<ans[i]<<" ";

    return ans;
}
int main(){
    int arr[] = {4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>nums(arr,arr+n);
    vector<int>ans;
    findnumber(nums,ans);
    

    return 0;
}