#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || j==(n-i-1)){
                cout<<"5";
            }
            else{
                cout<<" ";
            }
        }
            cout<<"\n";
    }

    return 0;
}