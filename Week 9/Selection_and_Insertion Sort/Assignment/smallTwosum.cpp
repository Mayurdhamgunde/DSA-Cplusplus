#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,1,5,5,2,3};
    int n = 6;
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    // Sorting using insertion sort -- >
    for(int i=1;i<=n-1;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    // printing sorted array -->
    for(int eww : arr){
        cout<<eww<<" ";
    }
    cout<<endl;
    // Converting sorted Array into Integer -->
    int x = 0;
    for(int i=0;i<n;i++){
        x *= 10;
        x += arr[i];
    }
    // Printing number in Integer Form -->
        cout<<x<<endl;

    // Finding second least number -- >
    for(int i=n;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
  cout<<endl;
    // Converting into integer type -- >
    int y = 0;
    for(int i=0;i<n;i++){
        y *= 10;
        y += arr[i];
    }
    // Printing number in Integer Form -->
        cout<<y<<endl;

    cout<<"Minimum Sum = "<<x+y;
}