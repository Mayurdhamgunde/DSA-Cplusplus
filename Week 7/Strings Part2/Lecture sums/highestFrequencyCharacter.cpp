#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int asci = (int)ch;
        v[asci-97]++;
    }
    int max = 0;
    for(int i=0;i<26;i++){
        if(v[i]>max) max = v[i];
    }
    for(int i=0;i<26;i++){
        if(v[i]==max){
            int asci = i+97;
            char ch = (char)asci;
            cout<<ch<<" "<<max<<endl;
        }
    }
    return 0;
}
