#include<iostream>
using namespace std;
bool ispalindrone(string s){
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string str = "mom";
    int check = ispalindrone(str);
    string output = (check==1)?"Yes the given string is palindrone":"No the given string is not palindrone";
    cout<<output;
    
    return 0;
}