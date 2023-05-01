#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int marks[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>marks[i];
        sum = sum+marks[i];
    }
    cout<<sum;

    return 0;
}