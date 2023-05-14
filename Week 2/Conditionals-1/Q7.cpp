#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the x-y coordinates"<<endl;
    cin>>x>>y;
    if((x==0)&&(y==0)){
        cout<<"The point lies at origin"<<endl;
    }
    else if((x!=0)&&(y==0)){
        cout<<"The point lies at x-axis"<<endl;
    }
    else if((x==0)&&(y!=0)){
        cout<<"The point lies at y-axis"<<endl;
    }
    else{
        cout<<"The point lies in the plane"<<endl;
    }

    return 0;
}