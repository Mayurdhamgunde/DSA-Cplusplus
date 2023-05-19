#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s,p;
    cout<<"Enter first string : ";
    cin>>s;
    cout<<"Enter second string : ";
    cin>>p;
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    bool flag = true;
    
    if(s!=p)flag = false;
    if(flag == true){
        cout<<"Anagram";
    }
    else{
        cout<<" Not Anagram";
    }
    return 0;
}