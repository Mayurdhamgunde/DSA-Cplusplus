#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        // spaces
        for(int j=1;j<i;j++){
            cout<<" ";
        }
            cout<<"*";

        int m=2*(n-i);
        // spaces
        for(int k=1;k<m;k++){
            cout<<" ";
        }
        cout<<"* ";
        cout<<endl;

    }
        for(int f=1;f<=n-1;f++){
            cout<<" ";
        }
        cout<<"*";

    return 0;
}