#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int l=1;l<n;l++){
        for(int m=1;m<=l;m++){
            cout<<" ";
        }
        for(int p=1;p<=n-l;p++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}