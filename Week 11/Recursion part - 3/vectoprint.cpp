#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[] = {12,5,8,4,5,8,89,1,2,78,23,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }
    display(v,0);

    return 0;
}