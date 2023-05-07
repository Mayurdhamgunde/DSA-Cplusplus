#include<iostream>
#include<vector>
using namespace std;
void  display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }                                           
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size = ";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<endl;
    display(v);
    cout<<endl;
    
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    display(v);

    return 0;
}