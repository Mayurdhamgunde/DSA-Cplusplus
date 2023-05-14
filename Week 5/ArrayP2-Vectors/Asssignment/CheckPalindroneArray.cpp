#include<iostream>
using namespace std;
bool isPalindrome(int a[],int n){
    for(int i=0;i<=n/2;i++){
        if(a[i]!=a[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter Size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<isPalindrome(arr,n);

    return 0;
}