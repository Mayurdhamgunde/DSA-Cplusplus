#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int prevSum = 0;
    int maxIdx = 0;
    for(int i=0;i<k;i++){
        prevSum += arr[i];
    }
    int maxSum = prevSum;
    int i = 1;
    int j = k;
    while(j<n){                                     // < - - - OR - - - > 
        int currentSum = prevSum+arr[j]-arr[i-1];  //  prevSum = prevSum+arr[j]-arr[i-1];
        if(maxSum<currentSum){                     //  if(maxSum<prevSum){
            maxSum = currentSum;                   //    maxSum = prevSum ;
            maxIdx = i;                            //    maxIdx = i;     
        }                                         //    }
        prevSum = currentSum;                     //   i++; j++;
        i++;                                    
        j++;
    }
    cout<<maxSum<<"\n";
    cout<<maxIdx;

    return 0;
}
