#include<iostream>
using namespace std;
void printsubset(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printsubset(ans+ch,original,idx+1);
    printsubset(ans,original,idx+1);
}
int main(){
    string str = "abc";
    printsubset("",str,0);
}
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void printsubset(string ans,string original){
//     if(original.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printsubset(ans+ch,original.substr(1));
//     printsubset(ans,original.substr(1));
// }
// int main(){
//     string str = "abc";
//     printsubset("",str);
// }


















