#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    bool flag = true;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"Array is sorted ";
    }
    else{
        cout<<"Array is Unsorted ";
    }

    return 0;
}