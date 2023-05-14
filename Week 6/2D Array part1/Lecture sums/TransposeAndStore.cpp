#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the row = ";
    cin>>m;
    cout<<"Enter the column = ";
    cin>>n;
    int arr[m][n];
    int brr[n][m];
    cout<<"Enter the elements = ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             brr[i][j] = arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}