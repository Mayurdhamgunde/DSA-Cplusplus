#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter number : ";
    cin>>x;
    bool flag = true;
    for(int i=2;i<x;i++){
        if(x%i==0){
            cout<<" COMPOSITE NUMBER ";
            flag = false;
            break;
        }
    }
    if(flag == true){
        if(x==1){
            cout<<"It's not either prime nor composite";
        }
        else  cout<<"PRIME NUMBER";
    } 
   
    return 0;
}