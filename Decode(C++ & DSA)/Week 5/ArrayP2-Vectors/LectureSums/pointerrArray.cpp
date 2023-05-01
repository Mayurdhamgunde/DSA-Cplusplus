#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,21,98,17};
    int *ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size-1;i++){
    cout<<ptr[i]<<" ";
    }

    return 0;
}