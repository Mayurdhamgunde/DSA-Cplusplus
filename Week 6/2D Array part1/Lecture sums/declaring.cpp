#include<iostream>
using namespace std;
int main(){
    int t,y;
    cout<<" Enter rows and column =  ";
    cin>>t>>y;
    int arr[t][y];
    cout<<"Enter elements = ";
    for(int i=0;i<t;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<y;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}