#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cout<<"Enter the string = ";
    getline(cin,n);
    for(int i=0;n[i]!='\0';i++){
        if(i%2==0||i==0){
            n[i] = 'a';
        }
    }
    cout<<n;

    return 0;
}