#include<iostream>
using namespace std;
int main(){
    int l,b,Area,Perimeter;
    cout<<"Enter the length and breadth of rectangle :- "<<endl;
    cin>>l>>b;

    Area = l*b;
    Perimeter = 2*(l+b);
    if(Area>Perimeter){
        cout<<"Area is greater than perimeter"<<endl;
    }
    else{
        cout<<"Perimeter is greater than Area"<<endl;
    }

    return 0;
}