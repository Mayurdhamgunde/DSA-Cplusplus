#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size = ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key = ";
    cin>>key;

    bool flag = false;
    for(int j=0;j<n;j++){
        if(arr[j]==key){
            flag = true;
        } 
    }
    if(flag == true){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }

    return 0;
}