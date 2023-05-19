#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    int len = s.length();
    int count = 0;
    for(int i=0;i<len;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            count++;
        }
    }
    cout<<count;

    return 0;
}