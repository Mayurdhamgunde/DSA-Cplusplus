#include<iostream>
using namespace std;
int coutTriplet(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x) count++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter key = ";
    cin>>x;

    cout<<coutTriplet(arr,n,x);

    return 0;
}