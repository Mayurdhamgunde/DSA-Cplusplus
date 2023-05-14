#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements = ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag = false;

    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"Contains Duplicate";
    }
    else{
        cout<<"No Duplicate";
    }

    return 0;
}