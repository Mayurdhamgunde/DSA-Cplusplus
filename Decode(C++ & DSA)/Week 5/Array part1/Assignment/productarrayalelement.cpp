#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0;i<=n-1;i++){
        product *= arr[i];
    }
    cout<<"Product = "<<product;

    return 0;
}