#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no of rows = ";
    cin>>m;
    int n;
    cout<<"Enter no of column = ";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    cout<<"Enter the first array elements = ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the Second array elements = ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }
    }
    //Adding the elements-->
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            brr[i][j] = brr[i][j]+arr[i][j];
        }
    }
    //Printing 
    cout<<"Addition of two array is :- "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}