#include<bits/stdc++.h>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

    return 0;
}