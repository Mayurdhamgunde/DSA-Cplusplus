#include<iostream>
#include<vector>
using namespace std;
int Inversion(vector<int>&v,int count){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j])count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Total inversion count :- "<<Inversion(v,0);

    return 0;
}
