#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n)return;
    cout<<arr[idx]<<endl;
    display(arr,n,idx+1); 

}
int main(){
    int arr[] = {4,5,2,45,8,8,2,1,5,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);

}