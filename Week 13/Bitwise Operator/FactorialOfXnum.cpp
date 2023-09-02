#include<iostream>
#include<vector>
using namespace std;
vector<long long int>factorial(int num){
    vector<long long int>v(num+1,1);
    int MOD = 1000000007;
    for(int i=2;i<v.size();i++){
        v[i] = ((i%MOD)*(v[i-1]%MOD))%MOD;
    }
    return v;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    vector<long long int> res = factorial(n);
    for(int i=0;i<res.size();i++){
        cout<<i<<" ! = "<<res[i]<<"\n";
    }

    return 0;
}