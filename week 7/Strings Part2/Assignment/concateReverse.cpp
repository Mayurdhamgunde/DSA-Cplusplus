#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p = s;
    reverse(s.begin(),s.end());
    cout<<p+s;
    
    return 0;
}