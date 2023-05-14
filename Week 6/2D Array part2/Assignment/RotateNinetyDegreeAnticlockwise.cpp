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
    cout<<endl;
    // Find transpose -->
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    // reversing -->
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(arr[i][j],arr[n-1-i][j]);
        }
    }
    // Displaying -->
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}