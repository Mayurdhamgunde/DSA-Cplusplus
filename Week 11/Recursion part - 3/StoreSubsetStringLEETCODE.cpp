#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
void storesubset(string ans,string original,vector<string>&v){
    if(original == ""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    storesubset(ans,original.substr(1),v);
    storesubset(ans+ch,original.substr(1),v);
}
int main(){
    string str = "abc";
    vector<string>v;
    storesubset("",str,v);
    for(string ele : v){
        cout<<ele<<endl;
    }

    return 0;
}
