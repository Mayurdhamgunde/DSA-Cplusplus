#include<iostream>
using namespace std;
int main(){

    // First Array -->

    int m;
    cout<<"Enter row size of 1st array = ";
    cin>>m;
    int n;
    cout<<"Enter column size of 2nd array = ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements of 1st array = "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // Second Array -->

    int y;
    cout<<"Enter row size of 2nd array = ";
    cin>>y;
    int z;
    cout<<"Enter column size of 2nd array = ";
    cin>>z;

    int brr[y][z];
    cout<<"Enter elements of 2nd array = "<<endl;
    for(int i=0;i<y;i++){
        for(int j=0;j<z;j++){
            cin>>brr[i][j];
        }
    }

    // Adding -->
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j] = arr[i][j]+brr[i][j];
        }
    }

    // Output -->
    cout<<"Addition of two matrices is : - "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}