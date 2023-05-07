#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the key = ";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;

    return 0;
}