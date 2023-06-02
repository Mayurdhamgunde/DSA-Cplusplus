#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string of even length = ";
    cin>>s;
    int len = s.length()/2;
    reverse(s.begin(),s.end()-len);
    cout<<s;

    return 0;
}