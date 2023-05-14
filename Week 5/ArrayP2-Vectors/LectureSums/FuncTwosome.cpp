#include<iostream>
#include<vector>
using namespace std;
vector<int> twosome(vector<int>&num,int x){
    for(int i=0;i<=num.size()-2;i++){
        for(int j=i+1;j<=num.size()-1;j++){
            if(num.at(i)+num.at(j)==x){
                cout<<"["<<i<<","<<j<<"]"<<" ";
            }
        }
    }
}
int main(){
    vector<int> v;
    int x;
    cin>>x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
        twosome(v,x);

    return 0;
}