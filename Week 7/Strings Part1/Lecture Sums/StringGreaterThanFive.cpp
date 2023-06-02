// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string len greater than 5 =  ";
    cin>>s;
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;

    return 0;
} 