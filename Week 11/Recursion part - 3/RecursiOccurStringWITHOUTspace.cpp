#include<iostream>
using namespace std;
void removeChar(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch=='a')removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}
int main(){
    string str = "Mayur sam";
    removeChar(" ",str,0);
}
