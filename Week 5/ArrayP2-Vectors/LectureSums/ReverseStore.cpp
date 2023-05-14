#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size = ";                                  
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    for(int j=n-1;j>=0;j--){
        v2.push_back(v1.at(j));
    }
    for(int i=0;i<=n-1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++){
        cout<<v2[i]<<" ";
    }
}