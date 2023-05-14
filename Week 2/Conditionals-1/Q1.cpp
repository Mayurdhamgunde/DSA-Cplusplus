#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers to be compared :- "<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greatest"<<endl;
    }
    else{
        cout<<b<<" is greatest"<<endl;
    }

    return 0;
}