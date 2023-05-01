#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int m=n-1;
    int nsp=1;

    for(int q=1;q<=2*n-1;q++){
        cout<<"*";
    }
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        for(int p=1;p<=m+1-i;p++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}