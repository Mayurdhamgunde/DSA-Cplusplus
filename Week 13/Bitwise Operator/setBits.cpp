#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int set_bits(int num){
    return __builtin_popcount(num);
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<set_bits(n);
}