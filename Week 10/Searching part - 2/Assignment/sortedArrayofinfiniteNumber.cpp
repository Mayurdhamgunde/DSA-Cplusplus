#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,7,10,12,15,18};
    int n = 8;
    int lo = 0;
    int hi = 1;
    int trgt = 11.
    ;
    while(arr[hi]<=trgt){
        lo = hi;
        hi *= 2;
    }
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid] == trgt){
            flag = true;
            break;
        }
        else if(trgt>arr[mid]) lo = mid+1;
        else hi = mid-1;
    }
    if(flag) cout<<"Element exist";
    else cout<<"Element does not exist";

    return 0;
}