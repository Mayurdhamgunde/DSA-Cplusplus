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
            cout<<(char)(64+k);
        }
        for(int m=i-1;m>=1;m--){
            cout<<(char)(64+m);
        }
        cout<<endl;
    }

    return 0;
}