#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

int combination(int n,int r){
    int ncr;
    ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}