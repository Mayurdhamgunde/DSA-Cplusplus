#include<iostream>
#include<climits>
using namespace std;
int main(){
   
        int m,n;
        cout<<"Enter no of rows and columns = ";
        cin>>m>>n;
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(max1<arr[i][j]){
                    max1 = arr[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(max2<arr[i][j] && arr[i][j]!=max1){
                    max2=arr[i][j];
                }
            }
        }
    cout<<"Second largest element is = "<<max2;

    return 0;
} 