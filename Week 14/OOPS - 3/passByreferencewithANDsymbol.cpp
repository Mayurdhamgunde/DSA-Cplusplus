#include<iostream>
using namespace std;
void show(int &p){
    p = 5;
}
int main(){
    int x = 10;
    cout<<x<<endl;
    show(x);
    cout<<x;
}