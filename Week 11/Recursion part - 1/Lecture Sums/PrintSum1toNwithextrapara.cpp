#include<iostream>
using namespace std;
void sumuptoN(int n,int i){
    if(i==0){
        cout<<n;
        return;
    }
    sumuptoN(n+i,i-1);
}
int main(){
    sumuptoN(0,10);
}