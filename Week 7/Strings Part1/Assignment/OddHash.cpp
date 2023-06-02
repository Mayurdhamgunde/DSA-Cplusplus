#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter odd length of strings = ";
    cin>>s;
    int len = s.length();
    for(int i=1;i<len;i+=2){
            s[i] = '#';
    }
     cout<<s;

    return 0;
}