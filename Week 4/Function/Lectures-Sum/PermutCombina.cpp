#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int NCR(int n,int r){
    int nfact,rfact,nrfact,nCr;
    nfact=rfact=nrfact=1;

    for(int i=2;i<=n;i++) nfact*=i;

    for(int j=2;j<=r;j++) rfact*=j;
    
    for(int k=2;k<=n-r;k++) nrfact*=k;
    
    nCr = nfact/(rfact*(nrfact));

    return nCr;
}

int main(){
    int n,r;
    cout<<"Enter value of n = ";
    cin>>n;
    cout<<"Enter value of r = ";
    cin>>r;
    cout<<NCR(n,r);

 return 0;
}
