#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int noz = 0;
    int noO = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else{
            noO++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}

void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter size = ";
    cin>>n;
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    sort01(v);
    display(v);
    
    return 0;
}