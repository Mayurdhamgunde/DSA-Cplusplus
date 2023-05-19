#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int len = s.length();
        if(len%2!=0)cout<<"Invalid Input ";
        else{
        reverse(s.begin()+len/2,s.end());
        cout<<s;
    }

    return 0;
}
