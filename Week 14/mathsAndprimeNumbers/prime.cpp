#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int x;
    cout<<"Enter number : ";
    cin>>x;
    bool flag = true;
    for(int i=2;i<x;i++){
       if(x%i==0){
       flag = false;
        break;
       }
    }
    if(flag==true){
        if(x%x==0){
            cout<<" PRIME NUMBER";
        }
    }
    else cout<<"COMPOSITE NUMBER";
    return 0;
}