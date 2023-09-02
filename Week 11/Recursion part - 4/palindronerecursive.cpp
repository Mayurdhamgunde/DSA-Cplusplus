#include<iostream>
using namespace std;
bool ispalindrone(string s,int i,int j){
    if(i>j)return true;
    if(s[i]!=s[j])return false;
    return ispalindrone(s,i+1,j-1);
}
int main(){
    string str = "momom";
    int check = ispalindrone(str,0,str.length()-1);
    string output = (check==1)?"TRUE":"FALSE";
    cout<<output;

    return 0;
}