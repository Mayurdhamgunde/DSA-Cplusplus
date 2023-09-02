#include<iostream>
using namespace std;
void prin(int n,int m){
    if(n>m)return;
        cout<<n<<endl;
        prin(n+1,m);
}
int main(){
    int i = 1;
     cout<<"enter N : ";
    int l;
    cin>>l;
    prin(i,l);
}