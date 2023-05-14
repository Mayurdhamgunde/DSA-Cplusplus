#include<iostream>
using namespace std;
bool duplicate(int a[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]==a[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets = ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }


    if(duplicate(arr,n)){
        cout<<"Yes it contains duplicate";
    }
    else{
        cout<<"No it does not contains duplicate";
    }

    return 0;
}