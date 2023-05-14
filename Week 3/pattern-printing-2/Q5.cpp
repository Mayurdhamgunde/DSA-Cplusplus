#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int m=n-1;
    int nsp=1;
    int f=1;
    for(int t=1;t<=2*n-1;t++){
        cout<<t;
    }
    cout<<endl;

    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=nsp;k++){
            cout<<" ";
            a++;
        }
        nsp+=2;
        int f=a;

        for(int q=1;q<=m+1-i;q++){
            cout<<f;
            f--;
        }
        cout<<endl;
    }
    return 0;
}