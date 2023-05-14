#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
    a[0]=2; 
    a[1]=5;
}
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(60);
    v.push_back(55);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    change(v);
    cout<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}