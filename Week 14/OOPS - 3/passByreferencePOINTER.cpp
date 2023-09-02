#include<iostream>
using namespace std;

void show(int* p){
    *p = 52;
}

int main(){
    int x = 10;
    cout<<x<<"\n";
    show(&x);
    cout<<x;

    return 0;
}