#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Next greater Element;
    int nge[n];
    for(int i=0;i<n;i++){
         nge[i] = -1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                nge[i] = arr[j];
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

    return 0;
}
