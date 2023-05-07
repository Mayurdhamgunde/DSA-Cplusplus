#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,50,1,30};
    int *ptr = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size-1;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr;
    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
   for(int i=0;i<=size-1;i++){
    cout<<*ptr<<" ";
    ptr++;
   }
    return 0;
}