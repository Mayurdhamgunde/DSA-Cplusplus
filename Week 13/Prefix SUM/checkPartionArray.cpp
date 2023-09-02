#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix Sum array ---> 
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    // check --->
    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx=i;
            break;
        } 
    }
    if(idx==-1) cout<<"NO array cannot be partitioned";
    else cout<<"Yes array can be partioned after "<<idx;

    return 0;
}