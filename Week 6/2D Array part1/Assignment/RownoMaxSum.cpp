#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row and col = ";
    cin>>m>>n;
    int maximum = INT_MIN;
    int index;
    int arr[m][n];
    cout<<"Enter elements = "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(maximum<sum){
            maximum = sum;
            index = i+1;
        }
    }
    cout<<"Maximum elements is present at row no. = "<<index;

    return 0;
}