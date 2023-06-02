#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s[] = {"0123","0023","456","00182","940","002901"};
    int max = stoi(s[0]);
    string maxs = s[0];
    for(int i=1;i<=5;i++){
        int x = stoi(s[i]);
        if(x>max){
            max=x;
            maxs=s[i];
    }
    }
        cout<<max<<endl;
        cout<<maxs;

    return 0;
}