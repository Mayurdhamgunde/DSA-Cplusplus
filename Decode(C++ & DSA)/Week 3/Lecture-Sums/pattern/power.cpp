#include<iostream>
using namespace std;
int main(){
    int power,number,cal=1;
    cout<<"Enter the number and it's power :- ";
    cin>>number>>power;
    for(int i=1;i<=power;i++){
        cal = cal*number;
    }
    cout<<cal;

    return 0;
}