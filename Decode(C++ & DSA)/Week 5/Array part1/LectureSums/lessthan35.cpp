#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students = ";
    cin>>n;
    int marks[n];
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }
    for(int j=0;j<n;j++){
        if(marks[j]<35){
            cout<<j+1<<" ";
        }
    }

    return 0;
}