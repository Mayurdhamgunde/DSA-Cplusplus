#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n]; 
    cout<<"Enter the elements : ";
    // Taking Input -- >
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Checking -- >
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    int p;
    for(p=0;p<n-1;p++){
        if(arr[p]>arr[p+1]){
            cout<<"NO";
            break;
        }
    }
    if(p == n-1){
        cout<<"YES";
    }

    return 0;
}