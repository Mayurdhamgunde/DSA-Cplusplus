#include<iostream>
using namespace std;
int maze2(int row,int col){
    if(row<1 || col<1)return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    return rightways+downways;
}
int main(){
    cout<<maze2(3,3);

    return 0;
}