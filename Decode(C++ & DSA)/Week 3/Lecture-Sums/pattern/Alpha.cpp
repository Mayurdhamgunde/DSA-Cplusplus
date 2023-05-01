#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows = ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=65;
        for(int j=1;j<=n;j++){
            cout<<(char)k;
            k++;
        }
        cout<<endl;
    }

    return 0;
}