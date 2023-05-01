#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year :- ";
    cin>>year;
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        cout<<"Entered year is leap year"<<endl;
    }
    else{
        cout<<"Entered year is Not a leap year"<<endl;
    }
    return 0;
}