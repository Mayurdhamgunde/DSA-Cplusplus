#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter col = ";
    cin>>m;
    cout<<"Enter row = ";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    cout<<"Enter elements = "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
            for(int t=0;t<m;t++)brr[t][j]=0;
            for(int p=0;p<n;p++)brr[i][p]=0;
            }
            else{
                if(brr[i][j] == 0) continue;
                else brr[i][j] = arr[i][j];
            }
        }
    }
    cout<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}