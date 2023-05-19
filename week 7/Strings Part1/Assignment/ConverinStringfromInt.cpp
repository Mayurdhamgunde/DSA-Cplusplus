#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int StintoInteger(string &s){
    int sum = 0;
    int product = 1;
    for(int i=s.size()-1;i>=0;i--){
        sum += (s[i] - '0' )*product;
        product *= 10;
    }
    return sum;
}
int main(){
    string s;
    cout<<"Enter the string size length less than 10 : ";
    cin>>s;
    int a = StintoInteger(s);
    return 0;
}
