#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    return;
}
void reversePart(int i,int j,vector<int>&v){
    for(int s=i,e=j;s<=e;s++,e--){
        int temp = v[s];
        v[s] = v[e];
        v[e] = temp;
    }
    return;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter size = ";
    cin>>n;
    cout<<"Enter the elemets = ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int k;
    cout<<"Enter K = ";
    cin>>k;

    if(k>n) k = k % n;
    reversePart(0,v.size()-1-k,v);
    reversePart(v.size()-k,v.size()-1,v);
    reversePart(0,v.size()-1,v);

    display(v);

    return 0;
}