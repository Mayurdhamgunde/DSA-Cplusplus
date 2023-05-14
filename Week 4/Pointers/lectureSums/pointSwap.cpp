#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int x,y;
    cout<<"Enter the numbers = ";
    cin>>x>>y;
    swap(&x,&y);
    cout<<x<<" "<<y;
}