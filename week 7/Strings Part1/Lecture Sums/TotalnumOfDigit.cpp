#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    string s = to_string(n);
    int len = s.length();
    cout<<"Their are total "<<len<<" number of digits in Number.";

    return 0;
}