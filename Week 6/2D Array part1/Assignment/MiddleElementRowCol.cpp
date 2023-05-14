#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row/col = ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter elements = "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == n/2 || j == n/2 ){
                cout<<arr[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}