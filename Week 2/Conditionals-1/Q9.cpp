#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character :- ";
    cin>>ch;
    if((ch>=65)&&(ch<=90)||(ch>=97)&&(ch<=122)){
        cout<<"Entered character is Alphabet"<<endl;
    }
    else if((ch>=48)&&(ch<=57)){
        cout<<"Entered character is Digit"<<endl;
    }
    else{
        cout<<"Entered character is Symbol"<<endl;
    }
    return 0;
}