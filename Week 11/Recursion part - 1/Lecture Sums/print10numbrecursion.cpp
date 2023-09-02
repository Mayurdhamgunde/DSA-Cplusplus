#include<iostream>
using namespace std;
void tenu(int n){
    if(n==0) return; 
     cout<<"10"<<endl;
    tenu(n-1);
}
int main(){
    tenu(10);
}