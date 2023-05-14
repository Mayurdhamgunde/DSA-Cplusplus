#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows = ";
    cin>>m;
    cout<<"Enter number of columns = ";
    cin>>n;
    int max = INT_MIN;
    int arr[m][n];
    cout<<"Enter elements = ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<max;

    return 0;
}