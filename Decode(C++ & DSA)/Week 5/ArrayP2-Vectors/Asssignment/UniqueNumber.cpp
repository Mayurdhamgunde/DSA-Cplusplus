#include<iostream>
using namespace std;
void unique(int arr[],int n){
     for(int i=0;i<n;i++){
        int count=0;
      for(int j=0;j<n;j++){
          if(i!=j&&arr[i]==arr[j]){
            count++;
          }
       }
     if(count==0){
        cout<<arr[i]<<" ";
     }
    }
    return;
}
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++)cin>>arr[i];
    
    unique(arr,n);

    return 0;
}