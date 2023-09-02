#include<iostream>
using namespace std;
int sumup(int n){
    if(n==0){
        return 0;
    }
    return n+sumup(n-1);
}
int main(){
    cout<<sumup(10); 
}