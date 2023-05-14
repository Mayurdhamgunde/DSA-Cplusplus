#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row/columns = ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter the elements = "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           cin>>arr[i][j];
        }
    }
    // Transpose -->
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // Output -->
    cout<<"After transpose Matrix is :- "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}