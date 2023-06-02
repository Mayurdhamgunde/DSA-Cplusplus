#include<iostream>
using namespace std;
int main(){
    int arr[6] = {5,6,3,1,2,4};

    for(int i=0;i<6-1;i++){
        bool flag = true;
        for(int j=0;j<6-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
            if(flag==true){
                break;
            }
    }
    // printing -->
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}