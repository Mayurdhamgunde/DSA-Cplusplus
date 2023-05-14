#include<iostream>
#include<limits.h>
using namespace std;
void threeGreatest(int a[],int n){
    int max1 = INT_MIN,max2 = INT_MIN,max3 = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max3=max2;
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i]){
            max3=max2;
            max2=a[i];
        }
        else if(max3<a[i]){
            max3=a[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
    return;
}
int main(){
    int n;
    cout<<"Enter size =";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    threeGreatest(arr,n);
    
    return 0;
}