#include<iostream>
using namespace std;
int main(){
    int arr[13] = {0,0,0,0,0,1,1,1,1,1,1,1,1};
    int n = 13;
    int x = 1;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(mid==0){
                flag = true;
                cout<<mid;
                break;
            }
            else if(arr[mid-1]!=x){
                flag = true;
                cout<<n-mid;
                break;
            }
            else{
                hi = mid-1;
            }
            
        }
        else if(x>arr[mid]) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<-1;

}