#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector< vector<int> > v(4,vector<int>(8,10));
    for(int i=0;i<4;i++){
        for(int j=0;j<8;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}