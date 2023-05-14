#include<iostream>
using namespace std;
int maxo(int x,int y){
    int a;
    if(x>y) a=x;
    else a=y;
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<maxo(a,b);
    return 0;
}