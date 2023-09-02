#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            res[k++] = a[i++];
        }
        else{
            res[k++] = b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
void mergSort(vector<int>&v){
    int n = v.size();
    if(n==1)return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j=0;j<n2;j++){
        b[j] = v[j+n1];
    }
    mergSort(a);
    mergSort(b);

    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v(arr,arr+n);
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    mergSort(v);
    for(auto x: v){
        cout<<x<<" ";
    }

}