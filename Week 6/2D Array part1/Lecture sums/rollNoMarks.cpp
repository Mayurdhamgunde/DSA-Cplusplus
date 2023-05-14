#include<iostream>
using namespace std;
int main(){
    int q;
    cout<<"Enter total students = ";
    cin>>q;
    int arr[2][q];

    cout<<"Enter roll no = ";
    for(int i=0;i<1;i++){
        for(int j=0;j<q;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter Marks = ";
    for(int i=1;i<2;i++){
        for(int j=0;j<q;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // Displaying 
    
    cout<<"Roll No\t";
   for(int i=0;i<1;i++){
        for(int j=0;j<q;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<"Marks\t";
    for(int i=1;i<2;i++){
        for(int j=0;j<q;j++){
            cout<<arr[i][j]<<" ";
        }
    } 

    return 0;
}