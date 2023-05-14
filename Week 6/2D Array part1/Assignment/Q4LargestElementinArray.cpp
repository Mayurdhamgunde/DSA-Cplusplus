#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows & Columns = ";
    cin>>n;
    int arr[n][n];
    cout<<"enter elements = "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Maximum element is :- "<<endl;
    cout<<max;

    return 0;
}