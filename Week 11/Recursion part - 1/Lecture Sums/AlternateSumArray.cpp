#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int addsum(vector<int>&v,int idx){
    if(idx==v.size()-1)return v[idx];
    return v[idx]+addsum(v,idx+1);
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<addsum(v,0);
}