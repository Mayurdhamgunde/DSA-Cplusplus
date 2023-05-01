#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the sides of traingle :- ";
    cin>>side1>>side2>>side3;
    if((side1==side2)&&(side2==side3)){
        cout<<"It's an Equilateral Triangle"<<endl;
    }
    else if((side1==side2)||(side1==side3)){
        cout<<"It's an isoceleus Triangle"<<endl;
    }
    else{
        cout<<"It's an scalene Triangle"<<endl;
    }
    return 0;
}