#include<iostream>
using namespace std;

void swapi(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void swapu(int &m,int &n){
    int temp = m;
    m = n;
    n = temp;
}

int main(){
    int x = 10;
    int y = 50;
    // swapi(&x,&y);
    swapu(x,y);
    cout<<" X : "<<x<<endl;
    cout<<" Y : "<<y;
    return 0;
}