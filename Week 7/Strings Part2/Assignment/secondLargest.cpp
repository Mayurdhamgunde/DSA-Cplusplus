#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    char max1 = '!';
    char max2 = '!';
    string s;
    cout<<"Enter string : ";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(max1<s[i]){
            max2=max1;
            max1 = s[i];
        }
        else if(max2<s[i] && max1!=s[i]){
            max2 = s[i];
        }
    }
         if(max2 == '!'){
            cout<<"There is no second largest number";
        }
        else{
            cout<<max2;
        }

    return 0;
}
