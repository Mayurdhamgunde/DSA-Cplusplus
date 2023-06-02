#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,7,6,4,2,1};
    int n = 6;
    int target = 1;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        } 
        else if(target<arr[mid]) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==true)cout<<"Element exist";
    else cout<<"Element does not exist";

    return 0;
}