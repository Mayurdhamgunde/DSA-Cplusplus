#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row and col = ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements = "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1 || i == j){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}