#include<iostream>
#include<vector>
using namespace std;
int sumofelements(vector<int>&v,int &ans,int idx){
    if(idx==v.size())return ans;
    ans = ans+v[idx];
    return sumofelements(v,ans,idx+1);
}
int main(){
    int n;
    cout<<"Enter size :- ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;
    cout<<sumofelements(v,ans,0);
}