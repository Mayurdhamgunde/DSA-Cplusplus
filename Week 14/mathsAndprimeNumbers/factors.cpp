#include<iostream>
#include<vector>
using namespace std;
void factor(vector<int>&v,int n){
    for(int i=1;i<n;i++){
        if(n%i==0) v.push_back(i);
    }
}
int main(){
    vector<int>v;
    int x ;
    cout<<"Enter number : ";
    cin>>x;
    factor(v,x);
    for(auto x: v) cout<<x<<" ";

    return 0;

}

// void factor(int n){
//     for(int i=1;i<n;i++){
//         if(n%i==0) cout<<i<<" ";
//     }
// }
// int main(){
//     int x;
//     cout<<"Enter number : ";
//     cin>>x;
//     factor(x);

//     return 0;
// }