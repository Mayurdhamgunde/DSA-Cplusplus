#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(string &s){
    int j = s.length()-1;
    for(int i=0,j=s.length()-1;i<j;i++,j--){
        if(s[i]!=s[j])return false;
    }
}
int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int len = s.length();
    cout<<(check(s)? "YES":"NO");

    return 0;
}
