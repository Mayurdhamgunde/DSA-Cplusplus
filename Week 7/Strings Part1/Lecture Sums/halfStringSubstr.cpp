// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string of even length : ";
    cin>>s;
    int len = s.length();
    cout<<s.substr(len/2);

    return 0;
}