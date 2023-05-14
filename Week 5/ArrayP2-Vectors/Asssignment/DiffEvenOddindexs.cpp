#include<iostream>
using namespace std;
int diff(int a[],int n){
     int sumE=0,sumO=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumE+=a[i];
        }
        else{
            sumO+=a[i];
        }
    }
    return (sumE-sumO);
}
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"The diff is = "<<diff(arr,n);

    return 0;
}