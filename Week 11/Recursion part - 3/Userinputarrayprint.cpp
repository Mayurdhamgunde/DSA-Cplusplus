#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n)return;
    cout<<arr[idx]<<endl;
    display(arr,n,idx+1);

}
int main(){
    int n;
    cout<<"enter the size of array : - ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n,0);
}