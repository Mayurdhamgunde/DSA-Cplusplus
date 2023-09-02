#include<bits/stdc++.h>
using namespace std;
int Minimum(vector<int>&v,int idx,int &mini){
    if(idx==v.size())return mini;
    mini = min(mini,v[idx]);
    return Minimum(v,idx+1,mini);
}
int main(){
    int n;
    cout<<"Enter the size of vector :- ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mini = INT_MAX;
    cout<<Minimum(v,0,mini);
}