#include<bits/stdc++.h>
#include<iostream>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string str = countAndSay(n-1); //3322251  --> 23 32 15 11
    string ztr = ""; //23321511
    char ch = str[0];
    int freq = 1;
    for(int i=1;i<str.length();i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{ // if(ch!=dh)
            ztr += (to_string(freq)+ch);
            freq = 1;
            ch = dh;
        }
    }
            ztr += (to_string(freq)+ch);
            return ztr;

}
int main(){
    int n;
    cout<<"Enter required number :- ";
    cin>>n;

    cout<<countAndSay(n);
}
