#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter no of rows & col : ";
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
   
    


}