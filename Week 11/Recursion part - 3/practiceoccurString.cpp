#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Mayur sam";
    string s = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a')s += str[i];
    }
    cout<<s;
    return 0;
}