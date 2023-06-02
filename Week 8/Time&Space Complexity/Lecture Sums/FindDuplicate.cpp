#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int siz;
    cout<<"Enter size : ";
    cin>>siz;
    vector<int> arr;
    cout<<"Enter elements : ";
    for(int i=0;i<siz;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int n = arr.size()-1;
    int sum = 0;
    for(int j=0;j<=n;j++){
        sum += arr[j];
    }
    int num = (n*(n+1))/2;
    cout<<"The duplicate element is : "<<sum-num;

    return 0;
}