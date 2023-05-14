#include<iostream>
using namespace std;
int main(){
    int radius;
    float area,perimeter;
    cout<<"Enter the radius :- "<<endl;
    cin>>radius;
    area = 3.14*radius*radius;
    perimeter = 2*3.14*radius;
    if(area>perimeter){
        cout<<"Area is greater than circumference";
    }
    else{
        cout<<"Area is lesser than circumference";
    }
    return 0;
}